#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    int i, j, min;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min])
                min = j;
        }
        if (min != i)
            swap(arr[min], arr[i]);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements :\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selectionSort(arr, n);
    cout << "Sorted Array: ";
    printArray(arr, n);

    return 0;
}


// 1. Compile the Code

// Use the g++ compiler to compile the code:
// bash
// g++ selection_sort.cpp -o selection_sort
// This will generate an executable file named selection_sort.

// 2. Run the Executable

// Execute the compiled program:
// bash
// ./selection_sort
// The program will prompt you to enter the size of the array and the elements.


// Example Output:

// Enter the size of the array : 5
// Enter 5 elements :
// 12 5 7 3 1
// Sorted Array: 1 3 5 7 12