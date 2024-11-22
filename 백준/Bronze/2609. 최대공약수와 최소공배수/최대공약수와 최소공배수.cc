#include <iostream>
using namespace std;

int main(){
    int a, b, temp;
    int t[3];
    cin>>a>>b;
    
    if(a < b){
        temp = a;
        a = b;
        b = temp;
    }
    t[0] = a;
    t[1] = b;
    
    while(t[0] % t[1]){
        t[2] = t[0] % t[1];
        t[0] = t[1];
        t[1] = t[2];
    }
    cout<<t[1]<<'\n';
    
    temp = a;
    while(temp % a || temp % b)
        temp += a;
    cout<<temp;
}