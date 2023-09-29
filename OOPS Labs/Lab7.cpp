#include <iostream>
using namespace std;

// for Q1
int findMax(int arr[], int size) {
    if (size <= 0) {
        return INT_MIN; 
    }
    
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    return max;
}

// for Q2
void findOddNumbers(int arr[], int size, int oddArr[], int &oddSize) {
    oddSize = 0; 
    
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            oddArr[oddSize++] = arr[i]; 
        }
    }
}

// for Q3
void squareArray(int arr[], int size) {
    int *ptr = arr; 
    
    for (int i = 0; i < size; i++) {
        *ptr = (*ptr) * (*ptr); 
        ptr++; 
    }
}

int main() {
    int arr[] = {10, 25, 7, 42, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int maxNumber = findMax(arr, size);
    
    if (maxNumber != INT_MIN) {
        cout << "The greatest number in the array is: " << maxNumber << endl;
    } else {
        cout << "The array is empty." << endl;
    }
    
    int oddArr[10]; // Assuming a max size of 10 for the odd array
    int oddSize; // To store the size of the odd array
    
    findOddNumbers(arr, size, oddArr, oddSize);
    
    cout << "Odd numbers in the array are: ";
    for (int i = 0; i < oddSize; i++) {
        cout << oddArr[i] << " ";
    }
    cout << endl;
    
    squareArray(arr, size);
    
    cout << "Squared array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}