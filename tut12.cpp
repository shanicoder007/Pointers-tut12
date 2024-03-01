#include <iostream>
using namespace std;

int main()
{

    // Pointers is a data type.The type of variable which holds the address of other data types.

    int a = 5;
    int *b;
    b = &a;
    // &------>  (Address of ) operator
    cout << b << endl;
    cout << "the adddrss of a is " << b << endl;
    cout << "the address of a is " << &a << endl;

    // *------>  (value of ) dereference operator
    cout << "the value at address b is  " << *b << endl;

    // ponters to pointers

    int **c = &b;
    cout << "the address of b is " << &b << endl;
    cout << "the address of b is " << c << endl;
    cout << "the value at address of c is " << **c << endl;
    return 0;
}