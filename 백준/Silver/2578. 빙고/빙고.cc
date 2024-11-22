#include<iostream>
using namespace std;

int checkBingo(int arr[5][5]){
    int count=0;
    
    for(int i=0;i<5;i++){
        bool check=true;
        for(int j=0;j<5;j++){
            if(arr[i][j]!=0){
                check=false;
                break;
            }
        }
        if(check){
            count++;
        }
    }

    for(int j=0;j<5;j++){
        bool check=true;
        for(int i=0;i<5;i++){
            if(arr[i][j]!=0){
                check=false;
                break;
            }
        }
        if(check){
            count++;
        }
    }
    bool check=true;
    for(int i=0;i<5;i++){
        if(arr[i][i]!=0){
            check=false;
            break;
        }
    }
    if(check){
        count++;
    }

    check=true;
    for(int i=0;i<5;i++){
        if(arr[i][4-i]!=0){
            check=false;
            break;
        }
    }
    if(check){
        count++;
    }

    return count;
}

int main(){
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }

    int arrR[25];
    for(int i=0;i<25;i++){
        cin>>arrR[i];
    }
    int res=0;
    for(int k=0;k<25;k++){
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                if(arr[i][j]==arrR[k]){
                    arr[i][j]=0;
                }
            }
        }
        res++;
        if(checkBingo(arr)>=3){
            break;
        }
    }

    cout<<res;
}