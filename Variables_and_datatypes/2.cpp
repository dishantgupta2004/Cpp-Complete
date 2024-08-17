#include <iostream>
using namespace std;

int main(){
    char letter= 'A';
    int asciivalue= static_cast<int>(letter);

    cout <<"The ASCII value of"<<letter<<"is"<<asciivalue<<endl;
    return 0;
}