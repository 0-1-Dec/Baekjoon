#include <iostream>
using namespace std;

int main(){
    int cnt;
    cin>>cnt;
    
    for(int i = 0; i < cnt; i++){
        for(int j = cnt; j > cnt-i; j--)
            cout<<' ';
        for(int j = 0; j < cnt-i; j++)
            cout<<'*';
        cout<<'\n';
    }
}