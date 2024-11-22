#include <stdio.h>
int score(char arr[][81], int i);

int main(){
    int num=0, cnt=0;
    scanf("%d", &num);
    char arr[num][81];
    for(int i=0; i<num; i++){
            scanf("%s", arr[i]);
    }
    for(int i=0; i<num; i++){
        printf("%d\n", score(arr, i));
    }
    return 0;
}

int score(char arr[][81], int i){
    int cnt=1, rst=0;
    for(int j=0; j<81; j++){
        if(arr[i][j] == 'O'){
           rst += cnt;
           cnt++; 
        }
        else
        cnt = 1;
    }
    return rst;
}