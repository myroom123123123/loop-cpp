#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter an integer A: ";
    cin >> a;
    cout << "Integers B, for which " << a << " is divisible by B*B but not divisible by B*B*B:" << endl;
    for (int b = 1; b <= a; ++b) {
        if (a % (b * b) == 0 && a % (b * b * b) != 0) {
            cout << b << endl;
        }
    }
    return 0;
}