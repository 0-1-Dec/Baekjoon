#include <stdio.h>

int main(){
    int cnt, x, temp = 0; char s[21];
    scanf("%d", &cnt);
    
    for(int i = 0; i < cnt; i++){
        scanf("%d %s", &x, s);
        for(int j = 0; s[j] != '\0'; j++){
            for(int k = 0; k < x; k++)
                printf("%c", s[j]);
        }
        printf("\n");
    }
}