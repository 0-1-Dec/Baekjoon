#include <iostream>
using namespace std;

int main(){
    int a, b, v, ans;
    cin>>a>>b>>v;
    
    ans = (v-b-1) / (a-b)+1;
    cout<<ans;
}