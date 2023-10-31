#include <iostream>
using namespace std;

int main(){
    
    int age;
    cout<<"Enter your age: "<<endl;
    cin>>age;

    //if-else conditionals
    if(age > 120 ){
        cout<<"Invalid age"<<endl;
    }else if(age >= 18){
        cout<<"You are eligible to vote"<<endl;
    }else{
        cout<<"You are not eligible to vote"<<endl;
    }

    int number;
    cout<<"Enter a number between 1 to 5: "<<endl;
    cin>>number;

    //switch conditionals
    switch (number)
    {
    case 1:
        cout<<"1 is Odd number";
        break;
    case 2:
        cout<<"1 is Odd number";
        break;        
    case 3:
        cout<<"1 is Odd number";
        break;
    case 4:
        cout<<"1 is Odd number";
        break;
    case 5:
        cout<<"1 is Odd number";
        break;                
    default:
        cout<<"Please enter number between 1 and 5 only:)";
        break;
    }


    return 0;

}