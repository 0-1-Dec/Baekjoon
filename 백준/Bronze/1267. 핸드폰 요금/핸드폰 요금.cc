#include <iostream>
using namespace std;

int main(){
    int YS = 0, MS = 0, cnt, temp;
    
    cin>>cnt;
    for(int i = 0; i < cnt; i++){
        cin>>temp;
        temp++;
        YS += ((temp / 30) * 10);
        MS += ((temp / 60) * 15);
        if(temp % 30 != 0)
            YS += 10;
        if(temp % 60 != 0)
            MS += 15;
    }
    
    if(YS < MS){
        cout<<"Y "<<YS;
    }
    else if(YS == MS)
        cout<<"Y M "<<YS;
    else
        cout<<"M "<<MS;
}