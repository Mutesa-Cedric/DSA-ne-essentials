#include <iostream>

// Bubble sort function
template <typename T>
void bubbleSort(T arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped in the inner loop, then the array is already sorted
        if (!swapped) {
            break;
        }
    }
}

// Utility function to print an array
template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Main function to demonstrate bubble sort
//int main() {
//    int arr[] = {64, 25, 12, 22, 11};
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    std::cout << "Original array: ";
//    printArray(arr, n);
//
//    // Perform bubble sort
//    bubbleSort(arr, n);
//
//    std::cout << "Sorted array: ";
//    printArray(arr, n);
//
//    return 0;
//}
