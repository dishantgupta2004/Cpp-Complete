#include <iostream>
using namespace std;

int main() {
    int total_pupils = 45;
    int boys = 25;
    int boys_with_A = 17;
    double percentage_A = 0.80;
    
    int total_A = boys_with_A / percentage_A;  // Total students with grade A
    int girls_with_A = total_A - boys_with_A;  // Girls with grade A
    
    cout << "Number of girls with grade 'A': " << girls_with_A << endl;
    
    return 0;
}
