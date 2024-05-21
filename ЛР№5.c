#include <stdio.h>
#define N 10
/*!
    \brief One-dimensional arrays
    \author Nikita
    \date 24 March, 2024
    \time 22:33
*/
int main(void)
{ // the beginning of the program
    float x[N]; ///\ an array of N elements it is a data structure that allows you to store and process a set of elements of the same type
    ///\ to fill the array, a loop is used in which each element is assigned a value
    float max = 0; // the maximum element of the array
    int i;
    // entering an array
    for (i = 0; i < N; i++)
        scanf("%f", &x[i]);
    // search for the maximum element
    for (i = 0; i < N; i++)
    {
        if (x[i] > max)
            max = x[i];
    }
    for (i = 0; i < N; i++)  // dividing negative elements by the maximum element
    {
        if (x[i] < 0)
            x[i] = x[i] / max;
    }
    // array output
    for (i = 0; i < N; i++)
        printf("%.7f\n", x[i]);
    printf("\n"); // output of negative array elements divided by the maximum element
    return 0;
}
