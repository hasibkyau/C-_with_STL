#include <iostream>
#include <map>
#include <iterator>
using namespace std;

int main()
{
    map <string, int> m;
    map <string, int>::iterator it;
    m["hasib"] = 12;
    m["siam"] = 13;
    ///or
    m.insert(make_pair("rakib",47));
    for(it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}
