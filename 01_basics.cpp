//  basics of cpp

#include <iostream>
using namespace std;
int main()
{
    cout << "hello world" << endl; // endl is used to insert a new line cout print the output stream

    // data types in cpp

    int a = 5; // integer data type
    float b = 5.5; // float data type
    char c = 'A'; // character data type
    bool d = true; // boolean data type
    double e = 5.55555; // double data type
    cout << "The value of a is: " << a << endl;
    cout << "The value of b is: " << b << endl;

    //typeconversion and typecasting
    int x = 5;
    float y = 5.5;
    cout << "The value of x + y is: " << x + y << endl; // implicit type conversion

    int z = (int)y; // explicit type casting
    cout << "The value of z is: " << z << endl;

    // user input
    int age;
    cout << "Enter your age: ";
    cin >> age; // cin is used to take input from the user
    
    return 0;
}
