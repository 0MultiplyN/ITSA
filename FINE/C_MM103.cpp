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

int myfun( int n )
{
    if( n==1 || n==2 )
        return 1;
    else if( n >= 3 )
        return myfun(n-1)+myfun(n-2);
    else return 0 ; 
}

int main( )
{
    int a ; 
    cin>>a ; 
    a = myfun(a) ; 
    cout <<  a << "\n" ; 
    return 0 ; 

}