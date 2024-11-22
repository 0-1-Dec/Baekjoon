#include <stdio.h>

int main(){
    char a[22]; int cnt;
    scanf("%d", &cnt);
    
    for(int i = 0; i < cnt; i++){
        scanf("%s", a);
        for(int j = 0; j <= 20; j++){
            if(a[j] == '\0' && j >= 6 && j <= 9){
                printf("yes\n");
                break;
            }
            else if(a[j] == '\0'){
                printf("no\n");
                break;
            }
        }
    }
    
    
}