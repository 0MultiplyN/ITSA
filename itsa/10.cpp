#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std ;
int main()
{
	int a,b;
	cin >> a >> b;
	while(b!=0)
    {
        int tmp = b;
        b = a % b;
        a = tmp;
	}//swap
	cout << a << '\n';

}