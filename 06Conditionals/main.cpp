#include <iostream>
using namespace std;

int main(){
    
    int age;
    cout<<"Enter your age: "<<endl;
    cin>>age;

    //if-else conditionals
    if(age > 120 || 5){
        cout<<"Invalid age";
    }else if(age >= 18){
        cout<<"You are eligible to vote";
    }else{
        cout<<"You are not eligible to vote";
    }

    return 0;

}