
#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    cout << "Enter a string: ";
    getline(cin, text);

    for (char &c : text) {
        if (c >= 'a' && c <= 'z') {
            c = (c == 'z') ? 'a' : c + 1;   
        }
        else if (c >= 'A' && c <= 'Z') {
            c = (c == 'Z') ? 'A' : c + 1;   
        }
        
    }

    cout << "Converted string: " << text << endl;
    return 0;
}