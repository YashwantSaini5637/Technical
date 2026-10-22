#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> a(n), b(n), result(n);

    cout << "Enter first array:";
    for (int &x : a) cin >> x;

    cout << "Enter second array:";
    for (int &x : b) cin >> x;

    for (int i = 0; i < n; i++) {
        result[i] = a[i] - b[i];
    }

    cout << "Result:";
    for (int x : result) cout << x << " ";

    return 0;
}