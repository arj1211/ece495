1. What are the computational advantages of using logodds when generating our occupancy grid?

The issue with the Bayesian probability update step is that the probability values can become very small or very large, which can lead to numerical instability and computation difficulties. Using log odds (or logit) transformation of probabilities can help to avoid this issue by converting the probability values to a logarithmic scale, which makes the computations more stable and numerically efficient. 

2. Is the angle phi in our Spherical to Cartesian calculation the same as the polar angle in standard Spherical coordinates? Why?

Ordinarily in standard spherical coordinates, $\theta$ is the polar angle measured from the z-axis. In our calculation, $\phi$ is used to represent the complementary polar angle measured from the xy-plane. The relationship between these two parameters $\theta_{standard}$ and $\phi_{ours}$ in degrees is

$\phi_{ours}$ = $90$ - $\theta_{standard}$