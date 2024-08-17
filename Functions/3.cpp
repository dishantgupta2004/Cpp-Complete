#include <iostream>
using namespace std;

void eligible(int age){
    if (age >= 18){
        cout <<"You are eligible to vote"<<endl;
    }
    else if(age < 18){
        cout <<"Sorry you are not eligible. Only above 18 can vote"<<endl;
    }
    else{
        cout<<"Not a valid age"<<endl;
    }
}

int main(){
    int age;
    cout <<"Enter the age: "<<" ";
    cin >> age;
    eligible(age);
    return 0;
}