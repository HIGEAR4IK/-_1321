#include <stdio.h>
#include <stdlib.h>
/*!
    \brief The speed challenge
    \author Nikita
    \date 10 February, 2024
    \time 18:32
*/
int main(void) ///\ It acts as a global function. Indicates the designated launch of the project in a particular environment
{
// the beginning of the program
// description of variables
    float v1; // the landing speed of the aircraft
    float v2; // reduced speed
    float t; // the elapsed time to the reset speed v2
    float s; // the distance that the plane managed to cover
    float v1_ms; // the converted speed v1 to the SI system
    float v2_ms; // the converted speed v2 to the SI system

// input of initial data
//displaying the v1 value
    printf("v1 = ");

// entering the value of variable v1 from the keyboard
    scanf("%f", &v1);

//displaying the v2 value
    printf("v2 = ");

// entering the value of variable v2 from the keyboard
    scanf("%f", &v2);

 //displaying the t value
    printf("t = ");

// entering the value of variable t from the keyboard
    scanf("%f", &t);

// solving the problem
// convert km/h to m/s
    v1_ms = v1*1000/3600;
    v2_ms = v2*1000/3600;

// calculate the distance using the formula s = (v1 + v2) * t / 2
    s = ((v1_ms+v2_ms)*t)/2; // distance calculations

// output of results
// displaying the value of the s variable (in meters)
    printf("distance = %.7f\n", s);

// the program returns a sign of correct completion
    return 0;

} // end of the program
