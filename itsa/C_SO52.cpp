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
   vector<int> b ; 
   for( int i = 0 ; i < a ; i++ )
   {
        int tmp ; 
        cin>>tmp ; 
        b.push_back(tmp) ;

   }
   sort(b.begin() , b.end( ) , greater<int>()) ;
   for( int i = 0 ; i < a ;  i++ )
   {
     cout<<i+1<<" "<<b[i]<<"\n" ; 
   }

   
    return 0;
}