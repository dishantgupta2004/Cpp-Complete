/* Problem: Find if there exists a pair in the array whose sum is exactly x.

Logic:

Use two pointers: one starting from the beginning (left) and one from the end (right).
Compute the sum of the elements at left and right.
If the sum equals x, return true.
If the sum is less than x, move the left pointer to the right to increase the sum.
If the sum is greater than x, move the right pointer to the left to decrease the sum.*/

#include <iostream>
#include <vector>
using namespace std;

bool haspairwithsum(vector <int>& arr, int x){
    int left= 0;
    int right= arr.size()-1;

    while (left < right){
        int sum = arr[left] + arr[right];
        if (sum == x){
            return true;
        } else if (sum < x){
            left += 1;
        } else {
            right -= 1;
        }
    }

    return false;
}

int main(){
    vector <int> arr= {4,5,6,7,9};
    int x= 13;

    if (haspairwithsum(arr, x)){
        cout <<"Pair with sum "<< x <<" exists. \n";
    } else{
        cout <<"Does not exist \n";
    }

    return 0;
}