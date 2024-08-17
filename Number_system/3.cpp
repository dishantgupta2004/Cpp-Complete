#include <iostream>
#include <string>
#include <bitset>

int binaryToDecimal(const std::string& binary) {
    return std::bitset<32>(binary).to_ulong(); // Convert binary string to decimal
}

int main() {
    std::string binary1, binary2;
    std::cout << "Enter first binary number: ";
    std::cin >> binary1;
    std::cout << "Enter second binary number: ";
    std::cin >> binary2;
    
    int decimal1 = binaryToDecimal(binary1);
    int decimal2 = binaryToDecimal(binary2);
    
    std::cout << "Greatest decimal number: " << (decimal1 > decimal2 ? decimal1 : decimal2) << std::endl;
    return 0;
}
