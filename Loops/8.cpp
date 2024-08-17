#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void printPrimeTriangle(int lines) {
    int count = 0;
    for (int i = 1; i <= lines; i++) {
        for (int j = 1; j <= i; j++) {
            while (!isPrime(++count));
            cout << count << " ";
        }
        cout << endl;
    }
}

int main() {
    int lines;
    cout << "Please enter the number of lines: ";
    cin >> lines;
    printPrimeTriangle(lines);
    return 0;
}
