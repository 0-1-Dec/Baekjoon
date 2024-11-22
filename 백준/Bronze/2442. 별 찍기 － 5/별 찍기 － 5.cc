#include <iostream>
using namespace std;

int main(){
    int cnt;
    cin>>cnt;
    
    for(int i = 1; i <= cnt; i++){
        for(int j = 0; j < cnt - i; j++){
            cout<<' ';
        }
        for(int k = 0; k < i * 2 -1; k++){
            cout<<'*';
        }
        cout<<'\n';
    }
}