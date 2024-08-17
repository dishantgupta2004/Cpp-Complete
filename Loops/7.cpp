#include <iostream>
using namespace std;

void printPlusPattern(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == size / 2 || j == size / 2)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

int main() {
    int size;
    cout << "Enter size of the plus pattern: ";
    cin >> size;
    printPlusPattern(size);
    return 0;
}
