#include <iostream>
using namespace std;


int main() {
    
    cout << fixed;   // 소수점 자리표현 고정

    int a = 13;
    double b = 0.165000;
    
    cout.precision(6);   //소수점 n자리까지 표현
    cout << a << " * " << b << " = " << a*b;



    return 0;
}