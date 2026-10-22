#include <iostream>
using namespace std;

int main() {
    string s;
    int count = 0;

    cout << "Enter a string: ";
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
            c=='A' || c=='E' || c=='I' || c=='O' || c=='U') {
            count++;
        }
    }

    cout << "Vowels: " << count;
    return 0;
}