#include <iostream>
using namespace std;

void printAlphabetDiamond(int n) {
    // Print the top part
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) cout << " ";
        for (char ch = 'A'; ch < 'A' + i; ch++) cout << ch;
        cout << endl;
    }
    // Print the bottom part
    for (int i = n - 1; i > 0; i--) {
        for (int j = n; j > i; j--) cout << " ";
        for (char ch = 'A'; ch < 'A' + i; ch++) cout << ch;
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the diamond: ";
    cin >> n;
    printAlphabetDiamond(n);
    return 0;
}
