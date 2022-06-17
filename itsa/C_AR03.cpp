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
    int n[7];
    for(int i=0;i<6;i++)
    {
        cin >> n[i];
    }
    long long int a= 0;
    for(int i=0;i<6;i++)
    {
        a += n[i]*n[i]*n[i];
    }
    cout << a << '\n';
}