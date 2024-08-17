#include <iostream>
#include <climits>

int minSumOfDifferentIndices(int a[], int b[], int n) {
    int minSum = INT_MAX;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != j) {
                int sum = a[i] + b[j];
                if (sum < minSum) {
                    minSum = sum;
                }
            }
        }
    }
    return minSum;
}

int main() {
    int a[] = {5, 6, 10, 4, 9};
    int b[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    std::cout << "Minimum sum: " << minSumOfDifferentIndices(a, b, n) << std::endl;
    return 0;
}
