#include <iostream>

using namespace std;

class item
{
    float cost;
    int number;

public:
    void getdata(int a, int b);
    void putdata()
    {
        cout << "number : " << cost << endl;
        cout << "cost :" << number << endl;
    }
};

void item::getdata(int a, int b)
{
    cost = a;
    number = b;
}


int main()
{
    item apple;
    apple.getdata(15, 2);
    apple.putdata();
    return 0;
}
