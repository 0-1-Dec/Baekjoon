#include <stdio.h>

int main(){
    char a[4], b[4]; int i = 2;
    char *c;
    scanf("%s %s", a, b);
    while(1){
        if(a[i] > b[i]){
            c = a;
            break;
        }
        else if(a[i] < b[i]){
            c = b;
            break;
        }
        i--;
    }
    printf("%c%c%c", c[2], c[1], c[0]);
}