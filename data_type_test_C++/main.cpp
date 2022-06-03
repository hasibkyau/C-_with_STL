#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a = pow(10, 9);
    long int b = pow(10, 9);
    long long c = pow(10, 9);
    cout << "int a = pow(10, 9) = " << a << endl;
    cout << "long int b = pow(10, 9) = " << b << endl;
    cout << "long long c = pow(10, 9) = " << c << endl;
    cout << endl;
    a = pow(10, 16);
    b = pow(10, 16);
    c = pow(10, 16);
    cout << "int a = pow(10, 16) = " << a << endl;
    cout << "long int b = pow(10, 16) = " << b << endl;
    cout << "long long c = pow(10, 16) = " << c << endl;

    cout << endl;
    a = pow(10, 9) + 1;
    b = pow(10, 9) + 1;
    c = pow(10, 9) + 1;
    cout << "int a = pow(10, 9) + 1 = " << a << endl;
    cout << "long int b = pow(10, 9) + 1 = " << b << endl;
    cout << "long long c = pow(10, 9) + 1 = " << c << endl;
    cout << endl;
    a = pow(10, 16) + 1;
    b = pow(10, 16) + 1;
    c = pow(10, 16) + 1;
    cout << "int a = pow(10, 16) + 1 = " << a << endl;
    cout << "long int b = pow(10, 16) + 1 = " << b << endl;
    cout << "long long c = pow(10, 16) + 1 = " << c << endl;
    return 0;
}
