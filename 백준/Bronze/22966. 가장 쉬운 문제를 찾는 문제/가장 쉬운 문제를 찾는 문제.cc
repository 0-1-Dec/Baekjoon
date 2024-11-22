#include <iostream>
using namespace std;

int main(){
    int cnt, min = 5, temp;
    string title, t_temp;
    
    cin>>cnt;
    for(int i = 0; i < cnt; i++){
        cin>>t_temp>>temp;
        if(min>temp){
            min = temp;
            title = t_temp;
        }
    }
    cout<<title;
}