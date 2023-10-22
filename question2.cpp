#include <iostream>
#include <cmath>

int main() {
    float v, d, t, r, num;                                                          //declares the variable for velocity, direction in degrees, time, radians, and the no. of datasets 
    float x = 0, y = 0;                                                             //sets the coordinates of the partiicle to the origin

    std::cout << "How many data sets do you have? ";  
    std::cin >> num;                                                                //inputs the number of datasets to be used
    
    for(int i=0; i<num; i++){
        
        std::cout << "Enter the data set "<<i+1<<"\n";                              //notifies the user of the current iteration of data set
    
        std::cout << "Enter the velocity of the particle: ";                        //gets the value of velocity o=in units/s
        std::cin >> v;
    
        std::cout << "Enter the direction of the particle in degrees: ";            //gets the value of the direction in degrees
        std::cin >> d;
    
        std::cout << "Enter the time interval of the particle in seconds: ";        //gets the time interval of particle
        std::cin >> t;
    
        r = d * (M_PI / 180);                                                     //converts degrees into radians
    
        x = x + v * cos(r) * t;                                                     //finds the x coordainate with the help of the horizontal component of the velocity
        y = y + v * sin(r) * t;                                                     //finds the y coordainate with the help of the vertical component of the velocity
        }
    
    std::cout << "x = " << x << " y = " << y;                                       //shows the user the final coordinates of the particle

    return 0;
}
