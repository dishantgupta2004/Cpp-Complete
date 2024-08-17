#include <iostream>
using namespace std;

int factorial(int num){
    if (num == 0){
        return 1;
    }
    else if(num >0){
        return num * factorial(num - 1);
    }
    else{
        cout <<"Factorial is defined only for positive integers"<<endl;
    }
}

int main(){
    int num = 5;
    cout <<"Factorial of "<<5<<" "<<factorial(num)<<endl;
    return 0;

}