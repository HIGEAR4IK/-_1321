#include <stdio.h>
#define K 3
#define N 4
/*!
    \brief Two-dimensional arrays
    \author Nikita
    \date 25 March, 2024
    \time 11:21
*/
int main(void) // the beginning of the program
{
    int x[K][N]; // an array of K by N elements
    int sum[K]; // array for storing sums of row elements
    int max_sum = 0, min_sum = 0; // maximum and minimum line amount
    int max_index = 0, min_index = 0; // the numbers of the maximum and minimum sum of lines to replace each other
    int temp, i, j; ///\ variable int temp is an integer type variable. Very often, this is what a variable is called
    ///\ for exchanging the values of two quantities - as an intermediate storage, for example, in a sorting algorithm

    //entering an array and calculating the sums of row elements
    for (i = 0; i < K; i++)
    {
        sum[i] = 0;
        for (j = 0; j < N; j++)
        {
            scanf("%d", &x[i][j]);
            sum[i] += x[i][j]; //each element of the sum[i] row is incremented by the corresponding value from the array x
        }

        // search for the row with the maximum amount
        if (i == 0 || sum[i] > max_sum)
        {
            max_sum = sum[i];
            max_index = i;
        }

        // search for the row with the minimum amount
        if (i == 0 || sum[i] < min_sum)
        {
            min_sum = sum[i];
            min_index = i;
        }
    }

    // exchanging lines with the maximum and minimum amount
    for (j = 0; j < N; j++)
    {
        temp = x[max_index][j];
        x[max_index][j] = x[min_index][j];
        x[min_index][j] = temp;
    }

    // output of the modified array
    for (i = 0; i < K; i++)
    {
        for (j = 0; j < N; j++)
            printf("%4d ", x[i][j]);
        printf("\n");
    }
    // the program returns a sign of correct completion
    return 0; //end of the program
}
