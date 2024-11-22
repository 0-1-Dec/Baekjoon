#include <iostream>
using namespace std;

int main(){
    int cnt;
    cin>>cnt;
    
    for(int i = 1; i <= cnt; i++){
        for(int j = 1; j <= cnt * 5; j++){
            cout<<'@';
        }
        cout<<'\n';
    }
    
    for(int i = 1; i <= cnt * 3; i++){
        for(int j = 1; j <= cnt; j++){
            cout<<'@';
        }
        cout<<'\n';
    }
    
    for(int i = 1; i <= cnt; i++){
        for(int j = 1; j <= cnt * 5; j++){
            cout<<'@';
        }
        cout<<'\n';
    }
}