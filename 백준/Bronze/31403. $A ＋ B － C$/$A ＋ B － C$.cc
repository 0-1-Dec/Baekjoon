#include <iostream>
using namespace std;

int main(){
    int a, b, c, temp;
    cin>>a>>b>>c;
    
    cout<<a+b-c<<'\n';
    
    if(b == 1000)
        temp = a * 10000 + b;
    else if(b % 100 != b)
        temp = a * 1000 + b;
    else if(b % 10 != b)
        temp = a * 100 + b;
    else
        temp = a * 10 + b;
    
    cout<<temp - c;
}