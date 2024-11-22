#include <stdio.h>

int main(){
    int a, b, cnt;
    
    scanf("%d", &cnt);
    
    for(int i = 0; i < cnt; i++){
        scanf("%d %d", &a, &b);
        if(a < b)
            printf("NO BRAINS\n");
        else
            printf("MMM BRAINS\n");
    }
}