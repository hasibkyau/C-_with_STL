#include <iostream>

using namespace std;

class item
{
    float cost;
    int number;
    void putdata()
    {
        cout << "number : " << cost << endl;
        cout << "cost :" << number << endl;
    }
    void display()
    {
        cout << "happy coding" << endl;
    }

public:
    void getdata(int a, int b);
    void show()
    {
        putdata();
        display();
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
    apple.putdata(); //it is illegal as it is in private section
    apple.show();//inside show(), the putdata function can be called
    return 0;
}
