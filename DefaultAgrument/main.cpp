#include <iostream>

using namespace std;

float add(float p, int n, float r)
{
    float sum;
    sum = p + n + r;
    return sum;
}

int main()
{
    float value(float p, int n, float r = 0.5);
    float x = 5;
    int y = 3;
    float amount;
    amount = add(2000.2, 5, 2);
    cout << amount << endl;

    return 0;
}
