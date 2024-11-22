#include <stdio.h>

int main(){
    int a, b, ans, cnt;
    
    scanf("%d", &cnt);
    for(int i = 0; i < cnt; i++){
        scanf("%d %d", & a, &b);
        ans = a+b;
        printf("%d\n", ans);
    }
}