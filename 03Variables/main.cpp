#include <iostream>
using namespace std;

//global variable
int glo = 12;

void sum(){ 
    cout<<glo;
}

int main(){
    int glo = 24;

    //variables
    int _k = 25;
    int marksInMaths = 99;
    // \n escape sequence character

    //camelCase Notation
    cout<<_k<<endl;
    cout<<marksInMaths;

    //variable scope
    //local variable;
    int variable = 5;
    
    sum();
    cout<<"global variable is: "<<glo;


}