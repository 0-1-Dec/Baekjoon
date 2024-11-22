#include <stdio.h>

int main(){
    int a, b, num = 28;
    
    scanf("%d \n %d", &a, &b);
    
    num = (a * 8) + (b * 3) - num;
    
    if(num < 0)
        printf("0");
    else
        printf("%d", num);
}