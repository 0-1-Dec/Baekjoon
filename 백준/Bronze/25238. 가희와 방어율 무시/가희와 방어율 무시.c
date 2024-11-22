#include <stdio.h>

int main(){
    double a, b;
    double num;
    scanf("%lf %lf", &a, &b);
    num = a - (a * (b / 100));
    
    if(num >= 100)
        printf("0");
    else
        printf("1");
}