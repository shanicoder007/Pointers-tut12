#include <iostream>
using namespace std;

int main()
{

    // POINTERS IN STRING

    string fathername = "karamatali";

    string *name = &fathername;

    cout << "the address of my father " << name << "   " << &fathername << endl;

    string qualification = "fsc pre medical";

    string *place = &qualification;

    cout << "The address of my college(qualification) is " << place << "    " << &qualification << endl;

    string hometown = "Barnali";

    string *residence = &hometown;

    cout << "The address of my home town is " << &hometown << endl;

    // POINTERS IN DOUBLE

    double a = 3.135674689456326;
    double *b = &a;

    cout << "The address of A is " << b << "   " << &a << endl;
    cout << "The value of b is " << *b << endl;

    // POINTERS TO POINTERS IN DOUBLE

    double **c = &b;

    cout << "The address of b is " << c << "  " << &b << endl;
    cout << "The value of c is " << **c << endl;

    // POINTERS IN CHAR

    char e = 'u';
    char *w = &e;

    cout << "The adress of e is " << &a << "   " << w << endl;

    cout << "The value of w is  " << *w << endl;

    // POINTERS TO POINTERS IN CHAR

    char **x = &w;

    cout << "The address of W is " << &w << "   " << x << endl;
    cout << "The value of x is " << **x << endl;

    return 0;
}