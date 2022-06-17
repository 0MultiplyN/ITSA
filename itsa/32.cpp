#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <math.h>
#include <vector>
using namespace std ;
int i,j,k,n,amount;
vector<int> people ; 
 
  
int main()
{  
    string w;  
    getline(cin,w);  
    int n;  
    cin >> n;  
    int len = w.size();  
    for(int i=0;i<len;i++)
    {  
        int ans=w[i];  
        if(ans>='a' && ans<='z')
        {  
            ans+=n;  
            if(ans>122)   ans-=26;
        }  
        else if(ans>='A' && ans<='Z')
        {  
            ans+=n;  
            if(ans>90)   ans-=26; 
        }  
        else if(ans>='0' && ans<='9')
        {  
            ans+=n;  
            if(ans>57)   ans-=10;  
        }  
        char r = ans;  
        cout << r;  
    }  
    cout << "\n";  
    return 0;  
}  
