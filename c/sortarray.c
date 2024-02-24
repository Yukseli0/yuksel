#include <stdio.h>
#include <stdlib.h>


// Function to perform bubble sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to take input from the user
void getIntegerArray(int arr[], int size) {
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

// Main function
int main() {
    int size;

    // Input array size
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input array elements
    getIntegerArray(arr, size);

    // Display the unsorted array
    printf("Unsorted Array: ");
    printArray(arr, size);

    // Sort the array using bubble sort
    bubbleSort(arr, size);

    // Display the sorted array
    printf("Sorted Array: ");
    printArray(arr, size);

    return 0;
}