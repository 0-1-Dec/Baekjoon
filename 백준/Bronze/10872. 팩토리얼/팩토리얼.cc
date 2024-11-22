#include <iostream>
using namespace std;

long fact(int i){
    if(i == 0)
        return 1;
    return i * fact(i-1);
}

int main(){
    int a;
    cin>>a;
    cout<<fact(a);
}