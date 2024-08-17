#include <iostream>
using namespace std;

int main() {
    double length, breadth;
    
    cout << "Enter length: ";
    cin >> length;
    
    cout << "Enter breadth: ";
    cin >> breadth;
    
    if (length <= 0 || breadth <= 0) {
        cout << "Invalid input" << std::endl;
    } else if (length == breadth) {
        cout << "It is a square" << std::endl;
    } else {
        cout << "It is a rectangle" << std::endl;
    }
    
    return 0;
}
