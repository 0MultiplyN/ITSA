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

int main( )
{
    int a ; 
    while(cin>>a) 
    {
        int flag = 0 ; 
        for( int i = 2 ; i < a ; i++ )
        {
            if( a % i == 0 ) 
            {
                flag = 1 ; 
                break ; 
            }
        }
        if( flag == 0 ) cout<<"yes\n" ;
        else cout<<"no\n" ; 
    } 
   

}