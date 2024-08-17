#include <iostream>

void countOddEven(int arr[], int n) {
    int oddCount = 0, evenCount = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
            ++evenCount;
        } else {
            ++oddCount;
        }
    }
    std::cout << "Odd Numbers = " << oddCount << std::endl;
    std::cout << "Even Numbers = " << evenCount << std::endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    countOddEven(arr, n);
    return 0;
}
