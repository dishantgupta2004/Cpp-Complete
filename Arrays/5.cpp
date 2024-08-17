#include <iostream>

int findMissingNumber(int arr[], int n) {
    int totalSum = n * (n + 1) / 2;
    int arraySum = 0;
    for (int i = 0; i < n; ++i) {
        arraySum += arr[i];
    }
    return totalSum - arraySum;
}

int main() {
    int arr[] = {0, 1, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Missing number: " << findMissingNumber(arr, n) << std::endl;
    return 0;
}
