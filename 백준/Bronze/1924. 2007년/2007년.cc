#include <iostream>
using namespace std;

int main(){
    int m, d, temp = 0;
    cin>>m>>d;
    
    switch(m){
        case 1:
            break;
        case 2:
            temp += 31;
            break;
        case 3:
            temp += 59;
            break;
        case 4:
            temp += 90;
            break;
        case 5:
            temp += 120;
            break;
        case 6:
            temp += 151;
            break;
        case 7:
            temp += 181;
            break;
        case 8:
            temp += 212;
            break;
        case 9:
            temp += 243;
            break;
        case 10:
            temp += 273;
            break;
        case 11:
            temp += 304;
            break;
        case 12:
            temp += 334;
            break;
    }
    temp += d;
    
    switch(temp%7){
        case 0:
            cout<<"SUN";
            break;
        case 1:
            cout<<"MON";
            break;
        case 2:
            cout<<"TUE";
            break;
        case 3:
            cout<<"WED";
            break;
        case 4:
            cout<<"THU";
            break;
        case 5:
            cout<<"FRI";
            break;
        case 6:
            cout<<"SAT";
            break;
    }
}