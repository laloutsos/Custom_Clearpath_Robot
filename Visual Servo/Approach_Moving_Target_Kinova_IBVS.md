# Approaching a Moving Target with IBVS (Image-Based Visual Servo).
### Below I will explain how, using IBVS, we control the Kinova arm of the Jackal and manage to approach a moving target object. Initially, I will focus on the theoretical and mathematical part, and as I progress with the implementation, I will also add and demonstrate how I connect each part of the theory with the code and the real robot.

## 1: 3D Target Position and Error Definition

Let $s = [X, Y, Z]^T$ be the current position of the target relative to the camera, where ```X``` and ```Y``` represent its coordinates in the image frame, and ```Z``` corresponds to its depth (distance) from the camera.

Let $s^* = [0, 0, Z^*]^Τ$ be the desired position of the target. We want it to be exactly at the center of the image with a depth ```Z*``` which we define as we need. 

Now we can define the error as $e = s - s^* =  [X, Y, Z-Z^*]^T$

## 2: Transforming Coordinates into Normalized 2D Image Coordinates
Moving forward, we will transform the 3D position of the object into its 2D projected point in the image plane.

$x = \frac{X}{Z} = \frac{u - C_x}{f_x}$

$y = \frac{Y}{Z} = \frac{v - C_y}{f_y}$

where $(u, v)$ denotes the current pixel coordinates, $C_x$ and $C_y$ represent the principal point (image center), and $f_x$, $f_y$ are the focal lengths of the camera expressed in pixel units along the $x$ and $y$ axes, respectively.

The last equation will be used later.

## 3: Derivation of Normalized Image Coordinate Dynamics
In this step, we compute the time derivatives of the normalized image coordinates in order to describe how the projected point evolves over time.

$x' = \frac{1}{Z}X' - \frac{X Z'}{Z^2} = \frac{X'Z - XZ'}{Z^2}$  : (1)  

$\ x = \frac{X}{Z} \Rightarrow X = xZ$ : (2)

From (1) and (2) we have the final result: 
$x' = \frac{x' - xZ'}{Z}$

Same procedure for y: $y' = \frac{y' - yZ'}{Z}$

## 4: Computing the Interraction matrix 

In order to proceed, we need to compute the derivative of $[X, Y, Z]^T$. Our goal is to derive a relationship that connects these quantities to the camera velocity, so that at any given moment we can compute the camera velocity based on the rate of change of the observed point coordinates.


$[X', Y', Z']^T = [-V_x, -V_y, -V_z]^T - [\omega_x, \omega_y, \omega_z]^T \times [X, Y, Z]^T = [-V_x - (\omega_y Z - \omega_z Y),\ -V_y - (\omega_z X - \omega_x Z),\ -V_z - (\omega_x Y - \omega_y X)]^T$

So finally we have:

$[X', Y', Z']^T = [-V_x - (\omega_y Z - \omega_z Y),\ -V_y - (\omega_z X - \omega_x Z),\ -V_z - (\omega_x Y - \omega_y X)]^T$ : (3)

Next,we replace (3) into x' and y' and after some computations we have:

$x' = -\frac{V_x}{Z} + \frac{xV_z}{Z} + xy\omega_x - (1+x^2)\omega_y + y\omega_z$

$y' = -\frac{V_y}{Z} + \frac{yV_z}{Z} + (1+y^2)\omega_x - xy\omega_y - x\omega_z$

Now we can extract the Interaction Matrix: 

$L_s =
\left[
\left[-\frac{1}{Z},\ 0,\ \frac{x}{Z},\ xy,\ -(1+x^2),\ y\right],\ 
\left[0,\ -\frac{1}{Z},\ \frac{y}{Z},\ 1+y^2,\ -xy,\ -x\right]
\right]^T$

and the velocity of the camera:

$V_c = [V_x, V_y, V_z, \omega_x, \omega_y, \omega_z]^T$

## 5: Error Evolution Over Time

Now we want to define the rate of change of the error.  
If the target is moving, the error depends both on the image features and explicitly on time, so:

$$
e = e(s,t)
$$

Its total derivative is:

$$
e' = \frac{\partial e}{\partial s}s' + \frac{\partial e}{\partial t}
$$

Since:

$$
s' = L_s V_c
$$

we obtain:

$$
e' = L_s V_c + \frac{\partial e}{\partial t}
$$

where $\frac{\partial e}{\partial t}$ describes the variation of the error caused by the target motion.

We impose an exponential decay of the error:

$$
e' = -\lambda e
$$

where $\lambda > 0$ is a gain parameter.

Equating the two expressions:

$$
-\lambda e = L_s V_c + \frac{\partial e}{\partial t}
$$

Solving for $V_c$:

$$
V_c = -L_s^{-1}\left(\lambda e + \frac{\partial e}{\partial t}\right)
$$

In practice, we do not always know whether the inverse exists or not, so we approximate it using the pseudo-inverse $L_s^+$.

$$
V_c = -L_s^+ \left(\lambda e + \frac{\partial e}{\partial t}\right)
$$

The pseudo-inverse is computed as:

$$
L_s^+ = L_s^T (L_s L_s^T)^{-1}
$$


# TODO

## 6: Estimating the moving target error term 

## 7: Controlling the joints of the robot by knowing Vc