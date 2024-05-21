#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*!
    \brief cyclic algorithms
    \author Nikita
    \date 12 February, 2024
    \time 20:20
*/
 float func (int n, float s){
    if (n==0){
        return s;

    } else {
        s+= pow(-1,n+1)*(n+2)/(n*(n+1));
        func (n-1,s);
    }
}

int main(void)
{ // start of the program
// entering variables
float s; // the sum of the series
float a; // another element of the series
int n; // the number of elements in the series
int i; // the number of the next element in the row


// entering row parameters
printf("n="); // enter the number of elements in the row
scanf("%d", &n);

// initial assignment of variables
s = func (n,0); // assigning the sum of a series

   // output of the result
printf("s = %f\n", s);

return 0;
} // end of the program


