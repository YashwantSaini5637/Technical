#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    double result;

    if (op == '+') {
        result = num1 + num2;
    } 
    else if (op == '-') {
        result = num1 - num2;
    } 
    else if (op == '*') {
        result = num1 * num2;
    } 
    else if (op == '/') {
        if (num2 == 0) {
            cout << "Error: Division by zero is not allowed.";
            return 0;
        }
        result = num1 / num2;
    } 
    else {
        cout << "Invalid operator.";
        return 0;
    }

    cout << "Result: " << result << endl;

    return 0;
