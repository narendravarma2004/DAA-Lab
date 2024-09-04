#include <iostream>
using namespace std;

int main() {
    int num, original, remainder, result = 0;
    cout << "Enter a number: ";
    cin >> num;
    original = num;

    while (original != 0) {
        remainder = original % 10;
        result += remainder * remainder * remainder;
        original /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";
    return 0;
}
