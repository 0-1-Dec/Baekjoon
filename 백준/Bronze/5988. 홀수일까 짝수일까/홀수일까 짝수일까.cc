#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int cnt;
    string str;
    cin>>cnt;
    
    for(int i = 0; i < cnt; i++){
        cin>>str;
        if(str[str.size() - 1] % 2 == 0)
            cout<<"even"<<'\n';
        else
            cout<<"odd"<<'\n';
    }
}