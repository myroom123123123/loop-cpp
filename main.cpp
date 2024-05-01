#include <iostream>
using namespace std;

int main() {
    double amount;
    int choice;
    for (;;) {
        cout << "Select an operation:" << endl;
        cout << "1. Convert dollars to euros" << endl;
        cout << "2. Convert euros to dollars" << endl;
        cout << "0. Exit" << endl;
        cout << "Your choice: ";
        cin >> choice;

        if (choice == 0) {
            cout << "Goodbye!" << endl;
            break;
        }

        switch (choice) {
        case 1:
            cout << "Enter the amount in dollars: ";
            cin >> amount;
            cout << amount << " dollars equals " << amount * 0.85 << " euros" << endl;
            break;
        case 2:
            cout << "Enter the amount in euros: ";
            cin >> amount;
            cout << amount << " euros equals " << amount / 0.85 << " dollars" << endl;
            break;
        default:
            cout << "Invalid option" << endl;
        }
    }
    return 0;
}
