#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std ;

int main()
{

    string a ;
    getline(cin,a) ;
    int b = stoi(a) ; 
    string w;
    while( b-- )
    {
        getline(cin,w) ;
        int num = 0;
        int len = w.size(); 
        int flag = 0 ; 
        for(int i= len - 1 ; i >= 0 ;i--)
        {
            cout<<w[i] ;
        }
        cout<<"\n" ; 
    }
   
    return 0;
}