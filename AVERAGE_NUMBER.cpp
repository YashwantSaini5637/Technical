#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];   
    cout << "Enter " << n << " numbers:";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int choice;
    do {
        cout << "--- Array Menu ---";
        cout << "1. Display Array";
        cout << "2. Calculate Averag";
        cout << "3. Find Maximu";
        cout << "4. Exit";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Array elements: ";
                for (int i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;
            }

            case 2: {
                double sum = 0;
                for (int i = 0; i < n; i++) {
                    sum += arr[i];
                }
                double avg = sum / n;
                cout << "Average = " << avg << endl;
                break;
            }

            case 3: {
                int maxVal = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] > maxVal) {
                        maxVal = arr[i];
                    }
                }
                cout << "Maximum value = " << maxVal << endl;
                break;
            }

            case 4:
                cout << "Exiting program.";
                break;

            default:
                cout << "Invalid choice. Try again.";
        }

    } while (choice != 4);

    return 0;
}