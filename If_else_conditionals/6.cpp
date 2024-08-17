#include <iostream>

int main() {
    int marks;
    
    std::cout << "Enter your marks: ";
    std::cin >> marks;
    
    if (marks >= 90) {
        std::cout << "Your Grade is A+" << std::endl;
    } else if (marks >= 80) {
        std::cout << "Your Grade is A" << std::endl;
    } else if (marks >= 70) {
        std::cout << "Your Grade is B+" << std::endl;
    } else if (marks >= 60) {
        std::cout << "Your Grade is B" << std::endl;
    } else if (marks >= 50) {
        std::cout << "Your Grade is C" << std::endl;
    } else {
        std::cout << "Your Grade is F" << std::endl;
    }
    
    return 0;
}
