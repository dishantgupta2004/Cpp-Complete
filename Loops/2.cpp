#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num){
    int originalNum = num;
    int sum= 0;
    while (num > 0){
        int digit = num % 10;
        sum += pow(digit, 3);
        num /= 10;
    }
    return (sum == originalNum);
}

int main(){

    for (int i= 100; i<=500; i++){
        if (isArmstrong(i)){
            cout << i <<" ";
        }
    }
    return 0;
}