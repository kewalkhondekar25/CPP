#include <iostream>
using namespace std;

int main(){

    int i = 1;
    //while loop
    while (i<=10)
    {
        cout<<i<<endl;
        i++;
    }

    //do-while loop
    int index = 0;
    do
    {
        cout<<"at index: "<<index<<endl;
        index += 1;
    } while (index <= 20);

    //for-loop
    for(int j = 0; j <= 15; j++){
        cout<<"values of j are: "<<j<<endl;
    }
    
    return 0;
}