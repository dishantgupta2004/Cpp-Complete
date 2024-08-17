#include <iostream>
#include <vector>
#include <climits>

int findElement(int arr[], int n) {
    if (n < 3) return -1; // Not enough elements to satisfy the condition
    
    // Step 1: Compute maxLeft array
    std::vector<int> maxLeft(n);
    maxLeft[0] = arr[0];
    for (int i = 1; i < n; ++i) {
        maxLeft[i] = std::max(maxLeft[i - 1], arr[i]);
    }

    // Step 2: Compute minRight array
    std::vector<int> minRight(n);
    minRight[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; --i) {
        minRight[i] = std::min(minRight[i + 1], arr[i]);
    }

    // Step 3: Find the required element
    for (int i = 1; i < n - 1; ++i) {
        if (maxLeft[i - 1] < arr[i] && arr[i] < minRight[i + 1]) {
            return arr[i];
        }
    }

    return -1; // No such element found
}

int main() {
    int arr[] = {1, 6, 5, 7, 10, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = findElement(arr, n);
    std::cout << "Output: " << result << std::endl;
    return 0;
}


