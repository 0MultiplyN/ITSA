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

int main (){
    string w;
    while(getline(cin, w))
    {
        stringstream ss;
        string tmp;
        int cnt = 0;
        long long int sum = 0;
        ss << w;
        while(ss >> tmp)
        {
            cnt++;
            sum+=stoi(tmp);
        }
        float r = (float)sum/cnt;
        cout << "Size: " << cnt << "\n" << "Average: " << fixed << setprecision(3) << r << "\n";
    }
    return 0;
}