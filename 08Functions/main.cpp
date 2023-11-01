#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

int main(){
    int a, b;
    cout<<"Enter number one: ";
    cin>>a;

    cout<<"enter second number";
    cin>>b;

    cout<<"sum of two numbers are: "<<add(a, b);
}