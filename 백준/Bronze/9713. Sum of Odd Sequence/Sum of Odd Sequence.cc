#include <iostream>
using namespace std;

int main(){
    int temp, sum, cnt;
    cin>>cnt;
    for(int i = 0; i < cnt; i++){
        cin>>temp;
        sum = 0;
        
        for(int j = 1; j <= temp; j += 2)
            sum += j;
        cout<<sum<<'\n';
    }
}