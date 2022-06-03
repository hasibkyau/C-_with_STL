#include <iostream>

using namespace std;
const int m = 50;
class worker
{
    string name[m];
    int age[m];
    int ID[m];
    int PIN[m];
    int count;

public:
    void CNT(void)
    {
        count = 0;
    }
    void logIn(void)
    {
        int yourID;
        cout << "ID : ";
        cin >> yourID;
        cout << " " << endl;

        int yourPass;
        cout << "Pass : ";
        cin >> yourPass;
        cout << " " << endl;

        for(int i = 0; i < count; i++)
        {
            if(ID[i] == yourID && PIN[i] == yourPass)
            {
                cout << "Log in success" << endl;
            }
            else
                cout << "your ID or Password is wrong" << endl;f
            }
    }
    void createAccount(void)
    {
        int a;
        int p;
        cout << "Enter your ID" << endl;
        cin >> a;
        cout << "Enter your password" << endl;
        cin >> p;

        ID[count] = a;
        PIN[count] = b;

        count++ ;
    }
};

int main()
{
    int value;
    worker dayShift;
    dayShift.CNT();


        cout << "Select your Operation" << endl;
        cout << "1. Log in" << endl;
        cout << "2. Create Account" << endl;
        cout << "3. Home" << endl;
        cout << "4. Exit" << endl;


        cin >> value;
    }
    while(value != 4);

    return 0;
}
