#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Enter a 5-digit number: ";
    cin >> num;
    
    int first_digit = num / 10000;
    int second_last_digit = (num / 10) % 10;
    
    int sum = first_digit + second_last_digit;
    
    cout << "Sum of the first and the second last digit: " << sum << endl;
    
    return 0;
}
