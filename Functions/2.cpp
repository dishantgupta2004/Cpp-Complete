#include <iostream>
using namespace std;

#define PI 3.142
void circle(double radius){
    double cir = 2*PI*radius;
    double area = PI * radius * radius;
    cout <<"circumferecne of circle is: "<<" "<<cir<<endl;
    cout <<"Area is : "<<" "<<area<<endl;
}
int main(){
    float r;
    cout <<"Enter the radius of circle: "<<" ";
    cin >> r;
    circle(r);

    return 0;
}