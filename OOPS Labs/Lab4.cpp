#include <iostream>
#include <cmath>
using namespace std;


//for   Q3
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


int main() {
    //Q1
    double base;
    
    cout << "Enter a number: ";
    cin >> base;
    
    for (int i = 2; i <= 5; i++) {
        cout << base << " raised to the power of " << i << " is " << pow(base, i) << endl;
    }

    //Q2
    int num;
    long long factorial = 1;
    
    cout << "Enter a positive integer: ";
    cin >> num;
    
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
        cout << "Factorial of " << num << " is " << factorial << endl;
    }

    //Q3
    int count = 0;
    int num = 2;
    
    cout << "The first 100 prime numbers are:" << endl;
    
    while (count < 100) {
        if (isPrime(num)) {
            cout << num << " ";
            count++;
        }
        num++;
    }

    //Q4
    int num;
    int sum = 0;
    
    cout << "Enter a number (1 to stop): ";
    cin >> num;
    
    while (num != 1) {
        sum += num;
        cout << "Enter the next number (1 to stop): ";
        cin >> num;
    }
    
    cout << "Sum of the numbers entered is: " << sum << endl;



    
    return 0;
}