#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    // Swapping using a third variable
    temp = a;
    a = b;
    b = temp;
    
    cout << "After swapping: " << a << ", " << b << std::endl;
    
    return 0;
}
