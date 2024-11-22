#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    while(cin>>a>>b>>c){
        if(b-a-1 < c-b-1)
            cout<<c-b-1<<'\n';
        else
            cout<<b-a-1<<'\n';
    }
    
}