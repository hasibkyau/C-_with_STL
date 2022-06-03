#include <iostream>

using namespace std;

class demo
{
    static int counter;
public:
    void increase_counter()
    {
        counter++;
    }

    static void showCounter()
    {
        cout << "Count = " << counter << endl;
    }
};

int main()
{
    demo obj1;
    obj1.increase_counter();
    obj1.increase_counter();
    obj1.showCounter();
    demo::showCounter();
    return 0;
}
