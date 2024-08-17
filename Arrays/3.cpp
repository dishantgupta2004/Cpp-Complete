#include <iostream>

void reverseArray(int arr[], int n) {
    for (int i = n - 1; i >= 0; --i) {
        std::cout << arr[i];
        if (i > 0) {
            std::cout << ",";
        }
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, n);
    return 0;
}
