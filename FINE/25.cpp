#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <string>
#include <sstream>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;
int main()
{
    string a ; 
    getline(cin,a) ; 
    int d = 0  ; 
    d = stoi(a) ;
    while(d--)
    {
        string b ; 
        getline(cin,b) ; 
        int len = b.length() ;
        int c = 0 ; 
        for( int i = 0 ; i < len ; i++ )
        {
            if( b[i] >= 32 )  c += b[i] ; 
        }
        cout<<c<<"\n" ; 
    }
    return 0 ; 
}
