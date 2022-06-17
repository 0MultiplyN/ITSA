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
int main( )
{
    int n, sum;
    int a, b, c;
    cin >> n ;
    for (int i = 0; i < n ; i++ )
    {
        cin >> a >> b >> c;
        sum = a + b + c;
        if (a >= 60 && b >= 60 && c >= 60)
        {
            cout << "P\n";
        }
        else if (((a < 60 && b >= 60 && c >= 60) || (b < 60 && c >= 60 && a >= 60) || (c < 60 && a >= 60 && b >= 60)) && sum >= 220)
        {
            cout << "P\n";
        }
        else if (((a < 60 && b >= 60 && c >= 60) || (b < 60 && c >= 60 && a >= 60) || (c < 60 && a >= 60 && b >= 60)) && sum < 220)
        {
            cout << "M\n";
        }
        else if (((a < 60 && b < 60 && c >= 80) || (b < 60 && c < 60 && a >= 80) || (c < 60 && a < 60 && b >= 80)))
        {
            cout << "M\n";
        }
        else
        {
            cout << "F\n";
        }
    }
}