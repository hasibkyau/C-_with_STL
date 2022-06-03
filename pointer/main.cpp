#include <iostream>

using namespace std;

    void f(int & x)
    {
        x = x + 10;
    }

int main()
{
    int x = 10;
    int *ip;
    ip = &x;
    int y = *ip;

    float total = 100;
    float & sum = total;
    float *temptotal = &sum;
    float & dum = *temptotal;

    int m = 10;
    f(m);
    cout << m << endl;
    cout << x << endl << ip << endl << *ip << endl << y << endl;
    cout << endl << total << endl << sum << endl << *temptotal << endl<< dum << endl;
    return 0;
}
