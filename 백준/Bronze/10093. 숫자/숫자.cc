#include <iostream>
using namespace std;

int main(){
    long long a, b, temp;
    cin>>a>>b;
    if(a > b){
        temp = a;
        a= b;
        b=temp;
    }
    
    if(a == b || a+1 == b){
        cout<<'0';
        return 0;
    }
    
    cout<<b-a-1<<endl;
    for(long long i = (a+1); i < b; i++){
        cout<<i<<' ';
    }
}