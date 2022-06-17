#include <bits/stdc++.h>
using namespace std ;
char table[4][6] =
{
    "*****",
    "*   *",
    "*    ",
    "    *"
};
int num[10][5] =
{
    {0,1,1,1,0},
    {3,3,3,3,3},
    {0,3,0,2,0},
    {0,3,0,3,0},
    {1,1,0,3,3},
    {0,2,0,3,0},
    {2,2,0,1,0},
    {0,3,3,3,3},
    {0,1,0,1,0},
    {0,1,0,3,3}
};

int main(){
    char in[6];
    cin>>in[0]>>in[1]>>in[2]>>in[3] ;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<table[num[in[j] - '0'][i]]<<" ";
        }
        cout<<table[num[in[3] - '0'][i]]<<"\n" ;
    }
}
