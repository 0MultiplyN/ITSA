#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std ;

int main()
{
    int a,i;
    cin >> a;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            break;
        }
    }
    if(i==a)
    {
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}