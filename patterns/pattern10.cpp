#include <iostream>
using namespace std;

int main() {
    int maxRows = 5;

    for (int i = 1; i <= maxRows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = maxRows - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}