#include <iostream>
#include <vector>

bool hasPairWithDifference(const std::vector<int>& arr, int x) {
    int left = 0;
    int right = 1;
    int n = arr.size();
    
    while (right < n) {
        int diff = arr[right] - arr[left];
        if (diff == x) {
            return true;
        } else if (diff < x) {
            ++right;
        } else {
            ++left;
            if (left == right) {
                ++right;
            }
        }
    }
    
    return false;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6};
    int x = 2;
    
    if (hasPairWithDifference(arr, x)) {
        std::cout << "Pair with absolute difference " << x << " exists.\n";
    } else {
        std::cout << "Pair with absolute difference " << x << " does not exist.\n";
    }
    return 0;
}
