#include <stdio.h>
int main(){
    int cnt, a;
    scanf("%d",&cnt);
    for(int i = 0; i < cnt; i++){
        scanf("%d", &a);
        printf("%d ", a/25);
        a %= 25;
        printf("%d ", a/10);
        a %= 10;
        printf("%d ", a/5);
        a %= 5;
        printf("%d\n", a);
    }
}