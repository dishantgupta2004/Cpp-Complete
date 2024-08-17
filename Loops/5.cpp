#include <iostream>
using namespace std;

void printCrossPattern(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (j == i || j == size - i - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

int main() {
    int size;
    cout << "Enter size of the cross pattern: ";
    cin >> size;
    printCrossPattern(size);
    return 0;
}
