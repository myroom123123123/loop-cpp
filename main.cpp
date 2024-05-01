#include <iostream>
using namespace std;

int main() {
    int number1, number2;
    cout << "Enter the first integer: ";
    cin >> number1;
    cout << "Enter the second integer: ";
    cin >> number2;
    cout << "Common divisors of " << number1 << " and " << number2 << ": ";
    for (int i = 1; i <= min(number1, number2); ++i) {
        if (number1 % i == 0 && number2 % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}

