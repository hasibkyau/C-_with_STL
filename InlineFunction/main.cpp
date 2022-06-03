#include <iostream>

using namespace std;

inline void message()
{
    cout << "Inline function take less time to execute" ;
}

void message2()
{
    cout << "simple function takes more time than inline function" << endl;
    cout << "But remember not to use inline functon for conditional statement or decision making" << endl;
}

int main()
{
    message();
    return 0;
}
