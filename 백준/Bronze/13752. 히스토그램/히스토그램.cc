#include <iostream>
using namespace std;

int main(){
    int cnt, temp;
    cin>>cnt;
    
    for(int i = 0; i < cnt; i++){
        cin>>temp;
        for(int j = 0; j < temp; j++)
            cout<<'=';
        cout<<endl;
    }
}