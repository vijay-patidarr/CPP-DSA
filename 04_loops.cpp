#include <iostream>
using namespace std ;
int main(){
    // loops in cpp 
    // for loop
    for(int i=0 ; i<5 ; i++){
        cout<<"hello world"<<endl;
    }

    // while loop
    int j=0;
    while(j<5){
        cout<<"hello world"<<endl;
        j++;
    }

    // do while loop
    int k=0;
    do{
        cout<<"hello world"<<endl;
        k++;
    }while(k<5);

// nested loops 
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cout<<i<<" "<<j<<endl;
        }
    }
    return 0;
}