#include <iostream>
using namespace std;

int main() {
    double costPrice, sellingPrice;
    
    cout << "Enter cost price: ";
    cin >> costPrice;
    
    cout << "Enter selling price: ";
    cin >> sellingPrice;
    
    if (sellingPrice > costPrice) {
        cout << "Profit = " << sellingPrice - costPrice << endl;
    } else if (costPrice > sellingPrice) {
        cout << "Loss = " << costPrice - sellingPrice << endl;
    } else {
        cout << "No profit, no loss" << endl;
    }
    
    return 0;
}
