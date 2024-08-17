#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    if (num1 == num2) {
        cout << "1" << endl;  // Numbers are equal
    } else {
        cout << "0" << endl;  // Numbers are not equal
    }
    
    return 0;
}
