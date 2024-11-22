#include <stdio.h>

int main(){
    int p, b;
    scanf("%d", &b);
    
    b = 5 * b - 400;
    
    if(b > 100)
        printf("%d\n-1", b);
    else if(b == 100)
        printf("%d\n0", b);
    else
        printf("%d\n1", b);
}