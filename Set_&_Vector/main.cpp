#include <bits/stdc++.h>

using namespace std;

int main()
{
    set <int> s;
    int c = 0;

    s.insert(10);
    s.insert(15);
    s.insert(20);
    s.insert(20);
    s.insert(35);
    s.insert(30);
    s.insert(40);
    s.insert(55);
    s.insert(60);

    set<int>::iterator it = s.begin();


    for(; it != s.end(); it++)
    {
       /// cout << *it << endl;
       cout << " " ;
    }
    for(const auto& e: s)
    {
        cout << e << endl;
    }

///    cout << c << endl;
///    cout << s.size() << endl;
    return 0;
}
