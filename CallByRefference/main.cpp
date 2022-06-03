// this is an exmple code of call by reference
#include <iostream>

using namespace std;

void exchange(int & a, int & b) //this &a and &b basically used to reference other variables.
{
    int t = a;
    a = b;
    b = a;
}

int main()
{
    int m, n;
    m = 10;
    n = 5;
    cout << " m = " << m << "  n = " << n << endl;

    exchange(m, n);

    cout << "after exchanging the values" << endl;
    cout << "m = " << m << "  n = " << n << endl;
    return 0;
}
