#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    int n=0;
    int b[100];
    cin >> n;
    if(n<0)
    {
        n+=256;
    }
    for(int i = 7; i >= 0; i--)
    {
        b[i]=n%2;
        n/=2;
    }
    for (int i = 0; i < 8; i++)
    {
        cout << b[i];
    }
    cout << "\n";
}

