#include <iostream>
using namespace std;

void printRectangle(int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;
    cout << "Please enter the number of star rows: ";
    cin >> rows;
    cout << "Please enter the number of star columns: ";
    cin >> cols;
    printRectangle(rows, cols);
    return 0;
}
