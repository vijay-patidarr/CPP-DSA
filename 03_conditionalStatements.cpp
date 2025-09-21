// if-else statements
#include <iostream> 
using namespace std;
int main (){
 int age;
 cout <<"enter your age :"<< endl;
cin>> age ;
if(age>18){
    cout<<"you are eligible to vote";
}
else if (age==18){
    cout<<"you are eligible to vote for the first time";
}
else{
    cout<<"you are not eligible to vote" << endl;
}

// ternary operator
(age>=18)? cout<<"you can vote": cout<<"you cannot vote";

return 0;
}