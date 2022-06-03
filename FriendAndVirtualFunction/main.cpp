#include <iostream>

using namespace std;

class test
{
    int data1, data2;
public:
    test(){}
    test(int a, int b)
    {
        data1 = a;
        data2 = b;
    }
    void display();
    friend void multiply(test);
};
void test::display()
{
    cout << "data1 : " << data1 << endl;
    cout << "data2 : " << data2 << endl;
}
void multiply(test t)
{
    int dataO;
    dataO = t.data1 * t.data2;
    cout << "Multiplication = " << dataO << endl;
}
int main()
{
    test obj(100, 200);
    obj.display();
    multiply(obj);

    return 0;
}
