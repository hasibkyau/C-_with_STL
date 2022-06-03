#include <iostream>

using namespace std;

int fact(int n)
{
    //base case
    if(n == 1)
        return 1;
    else
        n = n * fact(n-1);
}

int main()
{
    int x = 25;
    int y;
    y = fact(x);
    cout << y << endl;
    return 0;
}
