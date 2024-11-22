#include <iostream>
using namespace std;

int main(){
    int a[21]{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int st, en, temp;
    
    for(int i = 0; i < 10; i++){
        cin>>st>>en;
        for(int i = st; i <= en; i++){
            temp = a[i];
            a[i] = a[en];
            a[en] = temp;
            
            en--;
        }
    }
    
    for(int i = 1; i <= 20; i++){
        cout<<a[i]<<' ';
    }
}