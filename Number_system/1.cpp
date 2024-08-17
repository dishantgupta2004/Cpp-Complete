#include <iostream>
#include <bitset>

int main() {
    int sum = 0;
    for (int i = 1; i <= 5; ++i) {
        sum += i;
    }
    std::cout << "Sum in binary: " << std::bitset<8>(sum) << std::endl; // 8 bits to show binary representation
    return 0;
}
