// this is an exmple code of call by reference
#include <iostream>

using namespace std;

int& largest(int & a, int & b) //this &a and &b basically used to reference other variables.
{
    if(a > b)
    {
        return a;
    }

    else
        return b;
}

int& add(int& p, int& q)
{
    int sum = p + q;
    int& s = sum;
    return s;
}
int main()
{
    int m = 10, n = 5;
    int& x = m;
    int& y = n;

    int& c = largest(x, y);

    cout << "The bigger data is: " << c << endl;
    cout << "the sum of m and n is: " << add(x, y) << endl;

    //refferencing
    int z = 2;
    cout << "z :" << z << endl;
    int &v = z;
    cout << " v: " << v << endl;
    v = 111;
    cout << "new value of z :" << z << endl;
    return 0;
}
