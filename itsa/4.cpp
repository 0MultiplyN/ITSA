#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    int t1,t2,t3,t4;
    int m;
    int total = 0 ;
    cin >> t1 >> t2 >> t3 >> t4;
    m = (t3*60+t4)-(t1*60+t2);
    if(m<=120)
    {
        m = ( m / 30 ) * 30;
    }
    else if(m <= 240 )
    {
       m = ((m - 120) / 30) * 40 + 120 ;
    }
    else
    {
        m =((m- 240) / 30) * 60 + 280 ;
    }
    cout << m << "\n";
}
