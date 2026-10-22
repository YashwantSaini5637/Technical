#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of subjects: ";
    cin >> n;

    double gradePoint, sum = 0;

    for (int i = 1; i <= n; i++) {
        cout << "Enter grade point for subject " << i << ": ";
        cin >> gradePoint;
        sum += gradePoint;
    }

    double cgpa = sum / n;

    cout << "Your CGPA is: " << cgpa << endl;

    return 0;
}