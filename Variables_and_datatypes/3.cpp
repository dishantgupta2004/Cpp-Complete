#include <iostream>
using namespace std;

int main() {
    float length, breadth;
    cout << "Enter length and breadth of the rectangle: ";
    cin >> length >> breadth;
    
    float area = length * breadth;
    cout << "The area of the rectangle is " << area <<endl;

    return 0;
}
