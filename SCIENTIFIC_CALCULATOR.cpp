#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    double a, b;

    do {
        cout << "=== Scientific Calculator ===";
        cout << "1. Addition";
        cout << "2. Subtraction";
        cout << "3. Multiplication";
        cout << "4. Division";
        cout << "5. Power (a^b)";
        cout << "6. Square Root";
        cout << "7. Sine (in radians)";
        cout << "8. Cosine (in radians)";
        cout << "9. Logarithm (base e)";
        cout << "0. Exit";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result = " << a + b << endl;
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result = " << a - b << endl;
                break;

            case 3:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result = " << a * b << endl;
                break;

            case 4:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                if (b == 0)
                    cout << "Error: Division by zero!" << endl;
                else
                    cout << "Result = " << a / b << endl;
                break;

            case 5:
                cout << "Enter base and exponent: ";
                cin >> a >> b;
                cout << "Result = " << pow(a, b) << endl;
                break;

            case 6:
                cout << "Enter a number: ";
                cin >> a;
                if (a < 0)
                    cout << "Error: Negative number!" << endl;
                else
                    cout << "Result = " << sqrt(a) << endl;
                break;

            case 7:
                cout << "Enter angle (radians): ";
                cin >> a;
                cout << "sin(" << a << ") = " << sin(a) << endl;
                break;

            case 8:
                cout << "Enter angle (radians): ";
                cin >> a;
                cout << "cos(" << a << ") = " << cos(a) << endl;
                break;

            case 9:
                cout << "Enter a number: ";
                cin >> a;
                if (a <= 0)
                    cout << "Error: Log undefined!" << endl;
                else
                    cout << "log(" << a << ") = " << log(a) << endl;
                break;

            case 0:
                cout << "Exiting calculator..." << endl;
                break;

            default:
                cout << "Invalid choice! Try again.";
        }

    } while (choice != 0);

    return 0;
}