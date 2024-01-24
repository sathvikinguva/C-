#include <iostream>
#include <string>
using namespace std;
int main() {
    cout << "Enter a string: ";
    string inputString;
    getline(cin, inputString);

    int length = inputString.length();
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << inputString[j];
        }
        for (int j = i - 1; j >= 0; j--) {
            cout << inputString[j];
        }
        cout << endl;
    }
    return 0;
}
