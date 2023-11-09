#include <iostream>
using namespace std;

int global = 8;

int main(){

    int a, b;
    int global = 9;

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

    //scope resolution operator
    cout<<"global value is : "<<::global<<endl;

    //floating point literal
    float d = 3.14f;
    //double point literal
    long double e = 1.423l;
    cout<<"values are: "<<sizeof(3.14f)<<endl;
    cout<<"values are: "<<sizeof(1.423l)<<endl;

   

    return 0;

}