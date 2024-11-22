#include <stdio.h>

int main(){
    int a, sum1 = 0, sum2 = 0, sum3 = 0;
    scanf("%d", &a);
    
    sum1 = (a * (a+1)) / 2;
    sum2 = sum1 * sum1;
    sum3 = sum1 * sum1;
    printf("%d\n", sum1);
    printf("%d\n", sum2);
    printf("%d", sum3);
}