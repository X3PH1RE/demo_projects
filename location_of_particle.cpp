#include <iostream>
#include <cmath>

int main() {
    float v, d, t, r, num;                                                          //declares the variable for velocity, direction in degrees, time, radians, and the no. of datasets 
    float x = 0, y = 0;                                                             //sets the coordinates of the partiicle to the origin

    std::cout << "How many data sets do you have? ";  
    std::cin >> num;                                                                //inputs the number of datasets to be used

    std::cout << "Input the values of velocity, direction and time interval respectively: \n";        
    
    for(int i=0; i<num; i++){
    
        std::cin >> v;                                                              //gets the value of velocity o=in units/s
            
        std::cin >> d;                                                              //gets the value of the direction in degrees
                                
        std::cin >> t;                                                              //gets the time interval of particle
    
        r = d * (M_PI / 180);                                                       //converts degrees into radians
    
        x = x + v * cos(r) * t;                                                     //finds the x coordainate with the help of the horizontal component of the velocity
        y = y + v * sin(r) * t;                                                     //finds the y coordainate with the help of the vertical component of the velocity
        }
    
    std::cout << "x = " << x << " y = " << y;                                       //shows the user the final coordinates of the particle

    return 0;
}
