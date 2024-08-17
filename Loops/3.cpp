#include <iostream>
using namespace std;

int sumOfNaturalNumbers(int n) {
    return (n * (n + 1)) / 2;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Sum of first " << num << " natural numbers is " << sumOfNaturalNumbers(num) << endl;
    return 0;
}
