#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    float max ;
    float n ; 
    float min ;
    for(int i=0; i<10; i++)
    {
        cin >> n;
        if(i==0)
        {
            max = n;
            min = n;
        }
        else if(n>max)
        {
            max=n;
        }
        else if(n<min)
        {
            min=n;
        }
    }
    cout << "maximum:" << fixed << setprecision(2) << max << "\n" << "minimum:" << fixed << setprecision(2) << min << "\n" ;
    return 0;
}