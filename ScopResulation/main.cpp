#include <iostream>

using namespace std;
int b = 5;
int main()
{

    {
        int b = 20;
        cout << "we are in the inner block" << endl;
        cout << "b = " << ::b << endl;
        {
            b = 500;
            cout << b << endl;
            cout << ::b << endl;
        }
    }
    cout << "we are in the outer block" << endl;
    cout << "b = " << ::b << endl;
    return 0;
}
