#include <stdio.h>
/*!
    \brief Development of functions
    \author Nikita
    \date 17 May, 2024
    \time 17:07
*/

// Function to swap the minimum element with the last element in the array
void swap(int arr[], int size) { ///\The `swap` function is used to implement a single iteration of selection sorting, 
    ///\where at each step the smallest element is moved to the end of the unsorted part of the array.
    int minIndex = 0; // Initialize the index of the minimum element to the first element
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIndex]) { // If the current element is smaller than the current minimum
            minIndex = i; // Update the index of the minimum element
        }
    }
    int temp = arr[minIndex]; // Store the minimum element in a temporary variable
    arr[minIndex] = arr[size - 1]; // Replace the minimum element with the last element
    arr[size - 1] = temp; // Replace the last element with the minimum element
}

// Function to sort the array in descending order using the swap function
void sort(int arr[], int size) {
    for (int i = size - 1; i > 0; i--) {
        swap(arr, i + 1); // Call the swap function for each element starting from the last
    }
}

// Function to print the elements of the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); // Print each element followed by a space
    }
    printf("\n"); // Print a newline character after printing all elements
}

int eqArray(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        int elm1 = arr1[i];
        int elm2 = arr2[i];
        if (elm1 != elm2) return 0;
    }
    return 1;
}

void testGenerator(int number, int arr[], int resArr[], int size) {
    printf("\nTest ¹%d", number);
    printf("\nThe source array: "); // Print a message indicating the source array
    printArray(arr, size); // Call the function to print the source array

    sort(arr, size); // Call the function to sort the array in descending order

    printf("Sorted array in descending order: "); // Print a message indicating the sorted array
    printArray(arr, size); // Call the function to print the sorted array
    if (eqArray(arr, resArr, size)) printf("Test DONE!");
    else printf("Test FAILED!");
}

int main() {
    int arr1[] = {5, 2, 9, 1, 5, 6, 3, 8, 4, 7}; // Initialize the array with static values
    int resArr1[] = {9, 8, 7, 6, 5, 5, 4, 3, 2, 1};
    testGenerator(1, arr1, resArr1, 10);
     int arr2[] = {0, 100, 5, 77};
     int resArr2[] = {100, 77, 5, 0};
      testGenerator(2, arr2, resArr2, 4);
       int arr3[] = {52, 52, 0, 1, 4, 89, 100};
        int resArr3[] = {100, 89, 52, 52, 4, 1, 0};
      testGenerator(3, arr3, resArr3, 7);
       int arr4[] = {1, 11, 1, 1, 100, 0, 0, 0};
        int resArr4[] = {100, 11, 1, 1, 1, 0, 0, 0};
      testGenerator(4, arr4, resArr4, 8);
       int arr5[] = {0,1};
        int resArr5[] = {1, 0};
      testGenerator(5, arr5,resArr5, 2);
    return 0;
}