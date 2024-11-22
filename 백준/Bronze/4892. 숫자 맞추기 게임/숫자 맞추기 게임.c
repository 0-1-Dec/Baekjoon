#include <stdio.h>

int main(){
    int a;
    for(int i = 1; i < 1000000; i++){
        scanf("%d", &a);
        if(a == 0)
            break;
        
        if((a * 3) % 2 == 1){
            a = (a-1) / 2;
            printf("%d. odd %d\n", i, a);
        }
        else{
            a /= 2;
            printf("%d. even %d\n", i, a);
        }
    }
}