#include <iostream>
#include <climits>

int sumOfMinMax(int arr[], int n) {
    int minVal = INT_MAX;
    int maxVal = INT_MIN;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return minVal + maxVal;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Sum of smallest and greatest: " << sumOfMinMax(arr, n) << std::endl;
    return 0;
}
