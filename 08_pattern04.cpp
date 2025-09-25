#include<iostream>
using namespace std ;
int main(){
    // printing a rtingle
    int num ; 
  cout << "enter a number :";
  cin >> num ;
    for ( int i = 0; i < num; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout <<i;
        }
        cout<< endl;
    }
    
    return 0;
}