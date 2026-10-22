#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }

    cout << "Sum of squares from 1^2 to " << n << "^2 is: " << sum << endl;
    return 0;
}