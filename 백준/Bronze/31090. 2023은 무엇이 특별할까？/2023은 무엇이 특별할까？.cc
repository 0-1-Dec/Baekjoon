#include <iostream>
using namespace std;

int main(){
    int cnt, num;
    cin>>cnt;
    
    for(int i = 0; i < cnt; i++){
        cin>>num;
        if((num + 1) % (num % 100) == 0)
            cout<<"Good"<<endl;
        else
            cout<<"Bye"<<endl;
    }
}