#include <iostream>

using namespace std;


void counter()
{
    int count = 0; // general variable

    cout << count++;
    cout << " " ;
}

void counter2()
{
    static int count; //static variable

    cout << count++;
    cout << " " ;
}


int main()
{
    cout << "for genaral variable : ";

    for(int i = 0; i < 3; i++)
    {
        counter();
    }

    cout << endl << "for static variable : ";

    for(int i = 0; i < 3; i++)
    {
        counter2();
    }
    return 0;
}
