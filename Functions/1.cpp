#include <iostream>
using namespace std;

int print_square(int num){
    for (int i=1; i < num + 1; i++){
        cout <<i*i<<" ";
    }
}
int main(){
    int num;
    cout <<"Enter number : \t"<<endl;
    cin >> num;
    print_square(num);
    return 0;
}