#include <stdio.h>

int main(){
    int cnt; char s[101]; int sum = 0;
    scanf("%d", &cnt); scanf("%s", s);
    for(int i = 0; i < cnt; i++){
        sum += s[i] - '0';
    }
    printf("%d", sum);
}