#include <iostream>
using namespace std;

int main(){
    int a = 0, b = 0, c = 0, temp;
    cin>>temp;
    
    if(temp % 10 != 0){
        cout<<"-1";
        return 0;
    }
    
    a = temp / 300;
    temp %= 300;
    
    b = temp / 60;
    temp %= 60;
    
    c = temp / 10;
    
    cout<<a<<' '<<b<<' '<<c;
}