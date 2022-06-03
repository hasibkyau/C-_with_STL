#include <iostream>

using namespace std;

int sum(int a, int b, int c)
{
    int d = a + b + c;
    return d;
}

float sum(float a, float b, float c)
{
    float d = a + b + c;
    return d;
}

float sum(int a, int b)
{
    int c = a + b;
    return c;
}

int main()
{
    cout << "more than one function with same name is called function overloading" << endl;
    float x =5.2, y = 6.2, z = 7.2 ;
    int p = 5, q =  6, r = 7;
    cout << "float : " << sum(x, y, z) << endl;
    cout << "int sum: " << sum(p , q, r) << endl;
    cout << "tow argument : " << sum(p, q) << endl;
    return 0;
}
