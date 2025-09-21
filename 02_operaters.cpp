// operaters

#include <iostream>
using namespace std;
int main()
{
    // arithmetic operators
    int a1 = 5;
    int b1 = 10;
    cout << "The value of a1 + b1 is: " << a1 + b1 << endl; // addition

    cout << "The value of a1 - b1 is: " << a1 - b1 << endl; // subtraction

    cout << "The value of a1 * b1 is: " << a1 * b1 << endl; // multiplication

    cout << "The value of a1 / b1 is: " << a1 / b1 << endl; // division

    cout << "The value of a1 % b1 is: " << a1 % b1 << endl; // modulus

    

//    relational operators
    int a = 5;
    int b = 10;
    cout << "The value of a == b is: " << (a == b) << endl; // false

    cout << "The value of a != b is: " << (a != b) << endl; // true

    cout << "The value of a > b is: " << (a > b) << endl; // false

    cout << "The value of a < b is: " << (a < b) << endl; // true

    cout << "The value of a >= b is: " << (a >= b) << endl; // false

    cout << "The value of a <= b is: " << (a <= b) << endl; // true

//    logical operators
    cout << "The value of (a == b) && (a < b) is: " << ((a == b) && (a < b)) << endl; // false

    cout << "The value of (a != b) || (a < b) is: " << ((a != b) || (a < b)) << endl; // true
    
    cout << "The value of !(a == b) is: " << (!(a ==
    b)) << endl; // true

    // urinary operators
    int x = 5;
    cout << "The value of x++ is: " << x++ << endl; // 5

    cout << "The value of ++x is: " << ++x << endl; // 7
   
    cout << "The value of x-- is: " << x-- << endl; // 7
   
    cout << "The value of --x is: " << --x << endl; // 5

    return 0;
}
