#include <iostream>
#include <vector>
using namespace std;

vector <int> merge(vector <int>& arr1, vector <int>& arr2){
    int m = arr1.size();
    int n = arr2.size();
    vector <int> merged(m+n);

    int i=0, j=0, k=0;
    while (i < m && j < n){
        if (arr1[i] < arr2[j]){
            merged[k++] = arr1[i++];
        } else{
            merged[k++] = arr2[j++];
        }
    }

    while (i < m){
        merged[k++] = arr1[i++];
    }
    while (j < n){
        merged[k++] = arr2[j++];
    }
    return merged;
}
int main(){
    vector <int> arr1= {1,2,3};
    vector <int> arr2 = {4,5,6};

    vector <int> result = merge(arr1, arr2);

    for (int num: result){
        cout <<num<<" ";
    }
    return 0;
}