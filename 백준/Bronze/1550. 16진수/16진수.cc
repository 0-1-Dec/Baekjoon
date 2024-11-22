#include <iostream>
using namespace std;

int main(){
    int cnt = 1, sum = 0;
    string str;
    
    cin>>str;
    for(int i = str.size() -1; i >= 0; i--){
        if(str[i] >= '0' && str[i] <= '9')
            sum += (int(str[i]) - 48) * cnt;
        else
            sum += (int(str[i]) - 55) * cnt;
            
        cnt *= 16;
    }
    
    cout<<sum;
}