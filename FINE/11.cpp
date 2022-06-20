#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std ;
int main(){
    int a, b;
    int table[500][500];
    while(cin>>a>>b)
    {
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                
                cin>>table[ i ][ j ] ; 
            }
        }
        for (int i = 0; i < b; i++)
        {
            for (int j = 0; j < a-1 ; j++)
            {
                
                cout<<table[j][i]<<" " ; 
            }
            cout<<table[a-1][i]<<"\n" ; 
            
        }
    }
    return 0;
}