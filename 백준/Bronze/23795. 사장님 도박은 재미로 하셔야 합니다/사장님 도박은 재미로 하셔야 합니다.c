#include <stdio.h>

int main(){
    int a, num = 0;
    while(1){
        scanf("%d",&a);
        if(a == -1)
            break;
        num += a;
    }
    printf("%d", num);
}