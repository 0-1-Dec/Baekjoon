#include <iostream>
using namespace std;

int main(){
    int cnt;
    cin>>cnt;
    
    cnt += 2;
    
    for(int i = 1; i <= cnt; i++){
        for(int j = 1; j <= cnt; j++){
            if(i == 1 || i == cnt)
                cout<<'@';
            else if(j == 1 || j == cnt)
                cout<<'@';
            else
                cout<<' ';
        }
        cout<<'\n';
    }
}