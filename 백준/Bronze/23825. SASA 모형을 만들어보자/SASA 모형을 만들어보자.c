#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    a /= 2; b /= 2;
    if(a < b)
        printf("%d", a);
    else
        printf("%d",b);
}