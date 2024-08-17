#include <iostream>
#include <cmath>

bool isPrime(int num) {
    if (num <= 1) return false; // Numbers less than or equal to 1 are not prime
    if (num == 2) return true;  // 2 is the only even prime number
    if (num % 2 == 0) return false; // Other even numbers are not prime

    int limit = std::sqrt(num); // Check up to the square root of num
    for (int i = 3; i <= limit; i += 2) { // Check only odd numbers
        if (num % i == 0) return false; // If divisible, num is not prime
    }
    return true;
}

void printPrimesInRange(int a, int b) {
    for (int num = a; num <= b; ++num) {
        if (isPrime(num)) {
            std::cout << num << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int a, b;
    std::cout << "Enter two numbers a and b: ";
    std::cin >> a >> b;

    if (a > b) {
        std::cerr << "Invalid range. a should be less than or equal to b." << std::endl;
        return 1;
    }

    printPrimesInRange(a, b);
    return 0;
}
