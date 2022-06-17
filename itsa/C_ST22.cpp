#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std ;

int main()
{

    string w ;
    cin>>w ; 
       int a = 0 ;
       int len = w.size(); 
       int flag = 0 ; 
       for(int i= len - 1 ; i >= 0 ;i--)
       {
            if( w[i] >= 97 && w[i] <= 122 )
            {
                w[i] -= 32 ;
            }
            else if( w[i] >= 65 && w[i] <= 90 )
            {
                w[i] += 32 ;
            }
            cout<<w[i] ;
       }
       cout<<"\n" ; 
    
      
    return 0;
}