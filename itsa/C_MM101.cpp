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
    cin>>a ; 
    int b = a ; 
    while( ( a / 3 ) != 0 )
    {
        int c = a ; //15/3 = 5 5 / 3 = 1 
        a = a / 3 ;
        b += a ;  
        c = c % 3 ;  // 
        a = a + c ; 
    }
    cout<<b<<"\n" ; 
    return 0 ; 
}