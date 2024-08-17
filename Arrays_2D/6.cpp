#include <iostream>
#include <vector>
#include <algorithm>

int countTripletsBruteForce(const std::vector<int>& nums, int x) {
    int n = nums.size();
    int count = 0;

    // Three nested loops to check all triplets
    for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                if (nums[i] + nums[j] + nums[k] == x) {
                    ++count;
                }
            }
        }
    }

    return count;
}

int countTriplets(std::vector<int>& nums, int x) {
    int n = nums.size();
    int count = 0;
    
    // Sort the array to enable the two-pointer technique
    std::sort(nums.begin(), nums.end());
    
    // Fix one element and find the other two using the two-pointer technique
    for (int i = 0; i < n - 2; ++i) {
        int target = x - nums[i];
        int left = i + 1;
        int right = n - 1;
        
        while (left < right) {
            int sum = nums[left] + nums[right];
            if (sum == target) {
                ++count;
                ++left;
                --right;
                
                // Avoid duplicates
                while (left < right && nums[left] == nums[left - 1]) ++left;
                while (left < right && nums[right] == nums[right + 1]) --right;
            } else if (sum < target) {
                ++left;
            } else {
                --right;
            }
        }
    }
    
    return count;
}


int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5, 6};
    int x = 10;

    int result = countTripletsBruteForce(nums, x);
    int result1 = countTriplets(nums, x);

    std::cout << "The count of triplets that sum to " << x << " using brute-force is: " << result << std::endl;
    std::cout << "The count of triplets that sum to " << x << " using optimized approach is: " << result << std::endl;
    return 0;
}
