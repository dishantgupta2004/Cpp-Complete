#include <iostream>
#include <vector>
using namespace std;

vector <int> sortedSquares(vector <int>& arr){
    int left= 0;
    int right= arr.size() - 1;
    vector <int> result(arr.size());
    int index= arr.size() - 1;

    while (left <= right){
        if (abs(arr[left]) > abs(arr[right])){
            result[index--] = arr[left] * arr[right];
            left += 1;
        } else {
            result[index --] = arr[right] * arr[right];
            right -= 1;
        }
    }
    return result;
}

int main(){
    vector <int> arr = {-4, -1, 0, 3, 10};
    vector <int> result = sortedSquares(arr);

    for (int num : result){
        cout << num <<" ";
    }
    return 0;
}