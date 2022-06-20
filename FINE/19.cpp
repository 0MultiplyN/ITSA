#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std ;

int main()
{
    int table[3000];
    for (int i = 0; i < 30; i++)
        table[i] = 0;
    int n, cmax = 0;
    cin>>n ; 
    while(n--)
    {
        int a, b;
        cin>>a>>b ; 
        
        for (int i = a ; i < b ; i++)
        {
            table[i]++;
        }
    }
    for (int i = 0; i < 30; i++)
    {
        if(table[i] > cmax)
        {
            cmax = table[i];
        }
    }
    cout<<cmax<<"\n" ; 
    return 0;
}