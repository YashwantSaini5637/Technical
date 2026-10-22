#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    double D = b*b - 4*a*c;

    if (D >= 0) {
        cout << "Root 1 = " << (-b + sqrt(D)) / (2*a) << endl;
        cout << "Root 2 = " << (-b - sqrt(D)) / (2*a) << endl;
    } else {
        double real = -b / (2*a);
        double imag = sqrt(-D) / (2*a);
        cout << "Root 1 = " << real << " + " << imag << "i" << endl;
        cout << "Root 2 = " << real << " - " << imag << "i" << endl;
    }
}