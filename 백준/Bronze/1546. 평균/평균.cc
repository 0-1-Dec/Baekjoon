#include<iostream>
using namespace std;
int main(){
    int n;
    double m = 0;
    double a = 0;
    double arr[1001]={0};
    cin>>n;
    for(int i=1; i<=n; i++){
        double result;
        cin>>result;
        arr[i]=result;
        if(arr[i]>m){
            m= arr[i];
        }
    }
    for(int i=1; i<=n; i++){
        arr[i]=arr[i]/m*100;
        a += arr[i];
    }
  
    cout<<a/n;
    return 0;
}