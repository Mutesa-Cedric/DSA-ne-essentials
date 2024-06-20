#include <iostream>

// Linear search function
template <typename T>
int linearSearch(T arr[], int n, T key) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == key) {
            return i;  // Return the index of the key if found
        }
    }
    return -1;  // Return -1 if key is not found
}

// Main function to demonstrate linear search
//int main() {
//    int arr[] = {2, 3, 4, 10, 40};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    int key = 10;
//
//    int result = linearSearch(arr, n, key);
//    if (result != -1) {
//        std::cout << "Element found at index " << result << std::endl;
//    } else {
//        std::cout << "Element not found in array" << std::endl;
//    }
//
//    return 0;
//}
