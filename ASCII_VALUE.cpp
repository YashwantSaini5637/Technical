#include <iostream>
using namespace std;

int main() {

    int a, b;
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    int sum = a + b;

    cout << "The sum of " << a << " and " << b << " is: " << sum << endl;

    cout << "Counting from 1 to 5:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }

    return 0;
}