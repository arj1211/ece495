*Can elaborate on 2. (4-6 sentences), but for 1. 3. 4., 2 sentences maximum*
### 1. how is lane following achieved? (1 points)
- The car follows a list of coordinates given in `data/highway_map.csv`, each of the form $[x,y,s,dx,dy]$. The car uses the distance to each waypoint given by $s$ as well as orientation with respect to the highway loop given by $dx, dy$ to follow the lane. 
### 2. how to use spline to generate a smooth trajectory? (2 point)
- The spline takes in a set of $x,y$ coordinates and fits piecewise polynomial functions with the given $x,y$ coordinates as endpoints. This ensures that the created trajectory intersects all given waypoints and also ensures smooth transitions between each segment of the spline. In our case, cubic spline interpolation is used, meaning a cubic polynomial (which is a smooth function compared to a linear function for example) is fit between the given waypoints, yielding a smooth overall trajectory when pieced together. After this trajectory is created, additional points for the car are sampled from the computed spline-trajectory, making the car's steering transitions smooth. 
### 3. how to avoid collision with the car in front? (0.5 points)
- use sensor fusion list
- check if car in lane ahead
- check if we're gonna collide with it
- if so, take action to prevent collison
  - eitehr slow down
  - change lane
- To avoid collision with the car in front of us, we will first use the sensor fusion list to see if the car is in our lane, the distance the car is from us, and calculate the speed of the car to predict where it will be in the future. We will check if our car will collide with it in the future and with that information we will make the decision to either adjust speed or change lanes.
### 4. how to avoid cold start? (0.5 points)
- incrementally changing reference velocity instead of instantaneously changing velocity. This creates a smooth velocity curve; the value the car's velocity is incremented by can be set such that the acceleration limit condition of $10 m/s^2$ is not exceeded. 
