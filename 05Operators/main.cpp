#include <iostream>
using namespace std;

int main(){

    int a, b;

    cout<<"Enter first number: "<<endl;
    cin>>a;
    cout<<"Enter second number: "<<endl;
    cin>>b;

    //arithmaetic operators
    cout<<"a + b is: "<<a + b<<endl;
    cout<<"a - b is: "<<a - b<<endl;
    cout<<"a * b is: "<<a * b<<endl;
    cout<<"a / b is: "<<a / b<<endl;

    cout<<"a ++ is: "<<a++ <<endl;
    cout<<"a -- is: "<<a-- <<endl;
    cout<<"++a is: "<<++a<<endl;
    cout<<"--a is: "<<--a<<endl;

    //comparision operators
    cout<<"the value of a == b is: "<<(a == b)<<endl;
    cout<<"the value of a != b is: "<<(a != b)<<endl;
    cout<<"the value of a >= b is: "<<(a >= b)<<endl;
    cout<<"the value of a <= b is: "<<(a <= b)<<endl;
    cout<<"the value of a > b is: "<<(a > b)<<endl;
    cout<<"the value of a < b is: "<<(a < b)<<endl;

    //logical operators
    //AND
    cout<<"a == b && a <= b is: "<<((a == b) && (a <= b))<<endl;
    //OR
    cout<<"a == b || a <= b is: "<<((a==b) || (a <= b))<<endl;
    //NOT
    cout<<"(!(a == b)) is: "<<(!(a == b))<<endl;

    //typeCasting
    cout<<"a / b is: "<<(float) a / b<<endl;

    return 0;

}