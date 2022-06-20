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
int gcd( int a , int b )
{
    if( b == 0 ) return a ; 
    return gcd( b , a % b ) ;
}
int main()
{
    int c , d ; 
    cin>>c>>d ; 
    int e = gcd(c,d) ;
    cout<<e<<"\n" ; 
    return 0 ; 
}