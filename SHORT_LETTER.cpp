#include <iostream>
using namespace std;

int main() {
    string s = "Ram";   // Change this to any string
    char smallest = s[0];

    for (int i = 1; i < s.length(); i++) {
        if (s[i] < smallest) {
            smallest = s[i];
        }
    }

    cout << "Smallest letter: " << smallest << endl;
    return 0;
}