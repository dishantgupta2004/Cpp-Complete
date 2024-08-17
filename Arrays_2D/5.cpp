#include <iostream>
#include <vector>
using namespace std;

int UniquePairs(vector <int>& arr, int x){
    int left= 0;
    int right = arr.size() - 1;
    int count = 0;
    vector <int> result;
    while (left <= right){
        int sum = abs(arr[left] + arr[right]);
        if (sum == x){
            count += 1;
            result.push_back(arr[left]);
            result.push_back(arr[right]);
        } else if (sum < x){
            right -= 1;
        }else {
            left += 1;
        }
    }
    return count;
}
int main(){
    vector <int> arr= {1,2,3,4,6};
    int x= 7;
    cout <<"Unique pairs are "<<" "<< UniquePairs(arr, x);
    return 0;
}