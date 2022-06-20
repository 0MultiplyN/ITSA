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
    
    int a ; 
    cin>>a ;
    int B[10000] ; 
    for( int i = 0 ; i < a ; i++ )
    {
        cin>>B[ i ] ; 
    }
    sort(B , B + a ) ; 
    for( int i = 0 ; i < a ; i++ )
    {
        cout<<B[i]<<"\n" ; 
    }
}