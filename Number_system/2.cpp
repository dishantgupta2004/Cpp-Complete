#include <iostream>
#include <bitset>

int countZeros(int n) {
    std::string binary = std::bitset<32>(n).to_string(); // 32-bit binary representation
    size_t firstOne = binary.find('1');
    if (firstOne == std::string::npos) {
        return 0;
    }
    binary = binary.substr(firstOne); // Remove preceding zeros
    int zeroCount = 0;
    for (char bit : binary) {
        if (bit == '0') {
            ++zeroCount;
        }
    }
    return zeroCount;
}

int main() {
    int number;
    std::cout << "Enter a natural number: ";
    std::cin >> number;
    std::cout << "Number of zeros: " << countZeros(number) << std::endl;
    return 0;
}
