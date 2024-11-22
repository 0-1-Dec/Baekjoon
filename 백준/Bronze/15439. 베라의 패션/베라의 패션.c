#include <stdio.h>

int main(){
    int n, ans;
    
    scanf("%d", &n);
    
    if(n == 1){
        printf("0");
    }
    else{
        ans = n * (n - 1);
        printf("%d", ans);
    }
}