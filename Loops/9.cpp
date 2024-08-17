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

void findPrimePairs(int num) {
    for (int i = 2; i <= num / 2; i++) {
        if (isPrime(i) && isPrime(num - i)) {
            cout << num << " = " << i << " + " << num - i << endl;
        }
    }
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    findPrimePairs(num);
    return 0;
}
