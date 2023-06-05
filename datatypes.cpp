#include <iostream>
using namespace std;
int main()
{
    int a = 123;

    cout << a << endl;

    unsigned int b = 122; // negative number is not allowed

    cout << b << endl;

    char ch = 'A'; // more than one char is not allowed

    cout << ch << endl;

    bool bl = true; // It return only True=1 & false=0

    cout << bl << endl;

    float fl = 3.14; // It return decimal numbers

    cout << fl << endl;

    double dl = 1.345663;

    cout << dl << endl;

    int size = sizeof(a);
    cout << "size of a is: " << size << endl;

    return 0;
}