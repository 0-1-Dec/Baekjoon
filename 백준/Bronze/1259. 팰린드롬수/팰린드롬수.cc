#include <iostream>
using namespace std;

int main(){
    string a; bool t;
    
    while(1){
        t = true;
        cin>>a;
        
        if(a == "0")
            break;
        
        for(int i = 0; i < a.size(); i++){
            if(a[i] != a[a.size()-i-1]){
                t = false;
                break;
            }
        }
        
        if(t)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    
    
}