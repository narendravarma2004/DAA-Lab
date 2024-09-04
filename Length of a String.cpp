#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin >> str;

    cout << "Length of the string is: " << strlen(str);
    return 0;
}
