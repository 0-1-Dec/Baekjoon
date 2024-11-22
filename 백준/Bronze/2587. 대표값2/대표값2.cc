#include <iostream>
using namespace std;

int main(){
    int a[5]; int avg = 0, mid, temp;
    
    for(int i = 0; i < 5; i++){
        cin>>a[i];
        avg += a[i];
    }
    
    for(int i = 0; i < 4; i++){
        for(int j = i+1; j < 5; j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    avg /= 5;
    mid = a[2];
    
    cout<<avg<<'\n'<<mid;
}