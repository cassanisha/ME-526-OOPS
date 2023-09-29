#include <iostream>
using namespace std;

int main() {
    //Q1 
    char operation;
    double num1, num2, result;

    cout << "Simple Calculator Menu:" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "Enter your choice (1/2/3/4): ";
    cin >> operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (operation == '1') {
        result = num1 + num2;
        cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
    } else if (operation == '2') {
        result = num1 - num2;
        cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
    } else if (operation == '3') {
        result = num1 * num2;
        cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
    } else if (operation == '4') {
        if (num2 == 0) {
            cout << "Error! Division by zero is not allowed." << endl;
        } else {
            result = num1 / num2;
            cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
        }
    } else {
        cout << "Invalid operation choice." << endl;
    }

    //Q2
    int choice;
    double area;

    cout << "Geometric Shape Area Calculator Menu:" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Square" << endl;
    cout << "3. Rectangle" << endl;
    cout << "4. Triangle" << endl;
    cout << "Enter your choice (1/2/3/4): ";
    cin >> choice;

    switch (choice) {
        case 1: {
            double radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            area = 3.14159265359 * radius * radius;  // Pi * r^2
            break;
        }
        case 2: {
            double side;
            cout << "Enter the side length of the square: ";
            cin >> side;
            area = side * side;
            break;
        }
        case 3: {
            double length, width;
            cout << "Enter the length and width of the rectangle: ";
            cin >> length >> width;
            area = length * width;
            break;
        }
        case 4: {
            double base, height;
            cout << "Enter the base and height of the triangle: ";
            cin >> base >> height;
            area = 0.5 * base * height;  // 0.5 * base * height
            break;
        }
        default:
            cout << "Invalid choice." << endl;
            return 1;
    }

    cout << "Area: " << area << endl;

    
    //Q3
    int num1 = 5;
    int num2 = 10;

    // Pre-increment and pre-decrement
    cout << "Pre-increment and pre-decrement:" << endl;
    cout << "Original num1: " << num1 << endl;
    cout << "++num1: " << ++num1 << endl; // Increment and then use
    cout << "Original num2: " << num2 << endl;
    cout << "--num2: " << --num2 << endl; // Decrement and then use

    // Post-increment and post-decrement
    cout << "\nPost-increment and post-decrement:" << endl;
    int num3 = 7;
    int num4 = 12;
    cout << "Original num3: " << num3 << endl;
    cout << "num3++: " << num3++ << endl; // Use and then increment
    cout << "After post-increment, num3 is now: " << num3 << endl;
    cout << "Original num4: " << num4 << endl;
    cout << "num4--: " << num4-- << endl; // Use and then decrement
    cout << "After post-decrement, num4 is now: " << num4 << endl;









    return 0;
}