#include <iostream>

using namespace std;

int main()
{
    int i, a, x, numberOfChar = 0, tempInt, sum = 0;
    string str = "CA";
    char ch, tempCh;
    for(i = 0; i < str.length(); i++){
         ch = str.at(i);
         x = (int)ch - 64;
         if( x > 0 && x <= 26){
            numberOfChar++ ;
         }
    }
    for(i = 0; i < numberOfChar - 1; i++){
        tempCh = str.at(i);
        tempInt = ((int)tempCh - 64) * 26;
        sum = sum + tempInt;
    }
    tempCh = str.at(numberOfChar - 1);
    tempInt = (int)tempCh - 64;
    sum = sum + tempInt;
    cout << numberOfChar << endl;
    cout << sum << endl;
    return 0;
}
