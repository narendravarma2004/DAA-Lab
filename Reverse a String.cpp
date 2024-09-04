#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin >> str;

    int len = strlen(str);
    cout << "Reversed string: ";
    for (int i = len - 1; i >= 0; i--) {
        cout << str[i];
    }
    return 0;
}
