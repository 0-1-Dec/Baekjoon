#include <stdio.h>

long fac(int n){
    if(n == 0)
        return 1;
    return fac(n-1) * n;
}

int main(){
    int a;
    long num = 1;
    
    scanf("%d", &a);
    
    num = fac(a);
    
    printf("%ld", num);
}