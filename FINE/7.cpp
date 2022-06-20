#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std ;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        char e;
        int a, b, c, d;
        cin>>e>>a>>b>>c>>d ;
        if(e == '+')
        {
            cout<<a+c<<" "<<b+d<<"\n" ;

        }
        else if(e== '-')
        {
            cout<<a-c<<" "<<b-d<<"\n" ;

        }
        else
        {
            cout<<a*c-b*d<<" "<<a*d+b*c<<"\n" ;

        }
    }
    return 0;
}
