#include <iostream>
using namespace std;

//pointers are special type of data types, which stores adderess

int main(){

    int a = 25;
    int * ptra;

    ptra = &a;
    
    cout<<ptra<<endl;
    
    //* is de-referencing operator.
    cout<<*ptra;
    

    return 0;
}