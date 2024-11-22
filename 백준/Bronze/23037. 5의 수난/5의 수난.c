#include <stdio.h>

int main(){
    int a, num = 0;
    scanf("%d", &a);
    for(int i = 0; i < 5; i++){
        num += (a % 10) * (a % 10) * (a % 10) * (a % 10) * (a % 10);
        a /= 10;
    }
    printf("%d", num);
}