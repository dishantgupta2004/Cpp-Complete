#include <iostream>
#include <cmath> // for abs function

using namespace std;

int main() {
    double number;
    
    cout << "Enter a number: ";
    cin >> number;
    
    double absoluteValue = abs(number);
    
    cout << "The absolute value is: " << absoluteValue << endl;
    
    return 0;
}
