#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std ;


int main()
{
    int a=0;
    while(cin>>a)
    {
        if(a>=3 && a<=5)
        {
            cout << "Spring\n";
        }
        else if(a>=6 && a<=8)
        {
            cout << "Summer\n";
        }
        else if(a>=9 && a<=11)
        {
            cout <<"Autumn\n";
        }
        else
        {
            cout <<"Winter\n";
        }
    }
}
