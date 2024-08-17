#include <iostream>
using namespace std;

void print(int a, int b){
    for (int i=a; i <b+1; i++){
        if(i % 2 != 0){
            cout << i <<" ";
        }
    }
}

int main(){
    int lower= 1;
    int upper= 10;
    print(lower, upper);
    return 0;
}