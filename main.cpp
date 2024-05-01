#include <iostream>
using namespace std;

int main() {
    int count = 0;
    for (int i = 100; i <= 999; ++i)
    {
        int hundreds = i / 100;
        int tens = (i / 10) % 10;
        int units = i % 10;
        if (hundreds == tens || hundreds == units || tens == units) {
            ++count;
        }
    }
    cout << "The number of integers in the range from 100 to 999 that have two identical digits: " << count << endl;
	return 0;
}