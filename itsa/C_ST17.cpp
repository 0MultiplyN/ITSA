#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std ;

int main()
{

    string w;
    while( cin >> w)
    {
        int num = 0;
        int len = w.size()/2 ; 
        int flag = 0 ; 
        for(int i=0;i<len;i++)
        {
            if( w[i] != w[(w.size())-1-i])
            {
                cout << "NO\n";
                flag = 1 ; 
                break ; 
            }
            num++;
        }
        if( flag == 0 ) cout << "YES\n";
    }
   
    return 0;
}