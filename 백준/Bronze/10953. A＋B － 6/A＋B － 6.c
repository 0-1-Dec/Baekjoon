#include <stdio.h>

int main(){
    int cnt, sum, a, b;
    scanf("%d", &cnt);
    
    for(int i = 0; i < cnt; i++){
        scanf("%d,%d",&a,&b);
        sum = a+b;
        printf("%d\n", sum);
    }
}