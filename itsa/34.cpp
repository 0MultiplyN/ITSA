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
    int a,b;
    while(cin >> a >> b)
    {
        float c = 0.0 ; 
        if(b == 1)
        {
            c = (a - 80)*0.7;
            
        }
        else if(b == 2)
        {
            c = (a - 70)*0.6;
           
        }
        cout << fixed << setprecision(1) << c <<"\n";
    }
    return 0;
}