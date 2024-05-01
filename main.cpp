#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a;
    cout << "Enter an integer a: ";
    cin >> a;
    int sum = 0;
    for (int i = a; i != 0; i /= 10) {
        sum += i % 10;
    }
    int cube = sum * sum * sum;
    if (cube == a * a) {
        cout << "The cube of the sum of the digits of " << a << " is equal to " << a * a << endl;
    }
    else {
        cout << "The cube of the sum of the digits of " << a << " is not equal to " << a * a << endl;
    }
    return 0;
}
