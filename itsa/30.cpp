#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std ;
int main ()
{
    string m, d;
    cin >> m >> d;
    if(stoi(m)==1){
        if(stoi(d)<=20)  cout << "Capricorn\n";  
        else cout << "Aquarius\n";  
    }
    else if(stoi(m)==2){
        if(stoi(d)<=18){
            cout << "Aquarius\n";
        }
        else{
            cout << "Pisces\n";
        }
    }
    else if(stoi(m)==3){
        if(stoi(d)<=20){
            cout << "Pisces\n";
        }
        else{
            cout << "Aries\n";
        }
    }
    else if (stoi(m)==4){
        if(stoi(d)<=20){
            cout << "Aries\n";
        }
        else{
            cout << "Taurus\n";
        }
    }
    else if(stoi(m)==5){
        if(stoi(d)<=21){
            cout << "Taurus\n";
        }
        else{
            cout << "Gemini\n";
        }
    }
    else if(stoi(m)==6){
        if(stoi(d)<=21){
            cout << "Gemini\n";
        }
        else{
            cout << "Cancer\n";
        }
    }
    else if(stoi(m)==7){
        if(stoi(d)<=22){
            cout << "Cancer\n";
        }
        else{
            cout << "Leo\n";
        }
    }
    else if(stoi(m)==8){
        if(stoi(d)<=23){
            cout << "Leo\n";
        }
        else{
            cout << "Virgo\n";
        }
    }
    else if(stoi(m)==9){
        if(stoi(d)<=23){
            cout << "Virgo\n";
        }
        else{
            cout << "Libra\n";
        }
    }
    else if(stoi(m)==10){
        if(stoi(d)<=23){
            cout << "Libra\n";
        }
        else{
            cout << "Scorpio\n";
        }
    }
    else if(stoi(m)==11){
        if(stoi(d)<=22){
            cout << "Scorpio\n";
        }
        else{
            cout << "Sagittarius\n";
        }
    }
    else if(stoi(m)==12){
        if(stoi(d)<=21){
            cout << "Sagittarius\n";
        }
        else{
            cout << "Capricorn\n";
        }
    }
    return 0;
}