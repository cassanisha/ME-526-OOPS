#include <iostream>
using namespace std;

//for Q1
void swapNumbers(int* num1, int* num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

// for Q2
void calculatePower(int base, int exponent, int* result) {
    *result = 1;
    for (int i = 0; i < exponent; i++) {
        *result *= base;
    }
}

int main() {

    // Q1 Swap numbers using pointers
    int a = 5, b = 10;
    
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    swapNumbers(&a, &b);
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    
    // Q2 Calculate nth power using a pointer
    int base = 2, exponent = 3;
    int result;
    
    calculatePower(base, exponent, &result);
    
    cout << base << " raised to the power of " << exponent << " is " << result << endl;
    
    // Q3 Demonstrate pointer to a pointer
    int value = 42;
    int* ptr1 = &value;
    int** ptr2 = &ptr1;
    
    cout << "Value: " << value << endl;
    cout << "Value via ptr1: " << *ptr1 << endl;
    cout << "Value via ptr2 (pointer to pointer): " << **ptr2 << endl;
    
    return 0;
}