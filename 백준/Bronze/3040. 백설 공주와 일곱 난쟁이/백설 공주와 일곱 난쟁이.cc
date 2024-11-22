#include <iostream>
using namespace std;

int main(){
    int a[9]; int temp, sum = 0;
    bool b[9];
    
    for(int i = 0; i < 9; i++){
        cin>>a[i];
        b[i] = true;
        sum += a[i];
    }
    
    for(int i = 0; i < 8; i++){
        for(int j = i+1; j < 9; j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    for(int i = 0; i < 8; i++){
        for(int j = i+1; j < 9; j++){
            if(sum - a[i] - a[j] == 100){
                b[i] = false;
                b[j] = false;
                break;
            }
        }
        if(!b[i])
            break;
    }
    
    for(int i = 0; i < 9; i++){
        if(b[i] == true)
            cout<<a[i]<<'\n';
    }
}