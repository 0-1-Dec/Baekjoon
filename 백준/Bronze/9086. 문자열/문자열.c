#include <stdio.h>

int main(){
    int cnt; char c, s[1001];
    scanf("%d", &cnt);
    for(int i = 0; i < cnt; i++){
        scanf("%s", s);
        c = s[0]; printf("%c", c);
        for(int j = 0; s[j] != '\0'; j++)
            c = s[j];
        printf("%c\n", c);
    }
}