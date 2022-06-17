#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

#include <math.h>
using namespace std ;



int main()
{
    char line[1000],c;
    int i;
    cin>>line ; 
    for(i=0;line[i]!='\0';i++){
        c=line[i];
        c=c-3;
        cout<<c ; 
    }
    cout<<"\n" ; 
    return 0;
}
