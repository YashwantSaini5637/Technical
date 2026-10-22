#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];   
    cout << "Enter " << n << " elements:";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int choice;
    cout << "Menu:";
    cout << "1. Find Largest Element";
    cout << "2. Find Smallest Element";
    cout << "3. Exit";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            int largest = arr[0];
            for (int i = 1; i < n; i++) {
                if (arr[i] > largest)
                    largest = arr[i];
            }
            cout << "Largest element: " << largest << endl;
            break;
        }

        case 2: {
            int smallest = arr[0];
            for (int i = 1; i < n; i++) {
                if (arr[i] < smallest)
                    smallest = arr[i];
            }
            cout << "Smallest element: " << smallest << endl;
            break;
        }

        case 3:
            cout << "Exiting program.";
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}