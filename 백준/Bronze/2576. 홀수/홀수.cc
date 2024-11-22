#include <iostream>
using namespace std;

int main(){
    int min = 101, sum = 0, temp;
    for(int i = 0; i < 7; i++){
        cin>>temp;
        if(temp % 2 == 1){
            sum += temp;
            if(temp < min) min = temp;
        }
    }
    
    if(min == 101)
        cout<<"-1";
    else
        cout<<sum<<endl<<min;
}