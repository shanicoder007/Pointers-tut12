#include <iostream>

using namespace std;

int main()
{
    float a = 3.15;
    float *b;
    b = &a;

    // pointers

    // address of operators:  &----->>>>
    cout << "the address of a is " << b << endl;

    cout << "the address of a is " << &a << endl;

    // derefrence operators:  *-------->>>>

    cout << "the value at address of b is " << *b << endl;
    return 0;
}