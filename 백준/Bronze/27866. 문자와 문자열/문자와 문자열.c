#include <stdio.h>
int main(){
    char a[1000]; int cnt;
    scanf("%s", a); scanf("%d", &cnt);
    printf("%c",a[cnt-1]);
    return 0;
}