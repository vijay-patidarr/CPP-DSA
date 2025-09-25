#include <iostream>
using namespace std ;
int main(){
    int num ;
 cout<< "enter a number :" << endl ;
 cin >> num ;

 for ( int i = 0; i < num; i++)
 {
    for (int j = 0; j < num; j++)
    {
        cout<< j << " " ;
    }
    cout << endl;
 }

// another program to write no. in different way 
cout << "another pattern "<< endl;
int k = 0 ;
  for ( int i = 0; i < num; i++)
 {
    for (int j = 0; j < num; j++)
    {
        cout<< k << " " ;
        k++;
    }
    cout << endl;
 }
    return 0 ;
}