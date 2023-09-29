#include <iostream>
using namespace std;

//for Q2
int sumOfDigits(int n) {
    if (n < 10) {
        return n;
    }
    return n % 10 + sumOfDigits(n / 10);
}


//For Q1
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
//For Q3
long long factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}


//For Q4
int largestDivisor(int n) {
    if (n <= 1) {
        return -1;  // No valid divisor
    }
    
    for (int i = n / 2; i >= 1; i--) {
        if (n % i == 0) {
            return i;
        }
    }
    
    return 1;  // 1 is always a divisor
}


int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    int sum = sumOfDigits(num);
    
    cout << "Sum of digits of " << num << " is " << sum << endl;


    //Q2
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }
    
    //Q3
    int num;
    
    cout << "Enter a non-negative integer: ";
    cin >> num;
    
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        long long result = factorial(num);
        cout << "Factorial of " << num << " is " << result << endl;
    }

    //Q4
    int num;
    
    cout << "Enter a positive integer: ";
    cin >> num;
    
    int largest = largestDivisor(num);
    
    if (largest == -1) {
        cout << "No valid divisor found." << endl;
    } else {
        cout << "The largest divisor of " << num << " is " << largest << endl;
    }
    
    
    
    return 0;
}

