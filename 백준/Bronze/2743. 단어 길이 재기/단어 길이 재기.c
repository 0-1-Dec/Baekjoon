#include <string.h>
#include <stdio.h>
int main(){
    char a[100]; int i = 0; scanf("%s", &a);
    while(a[i] != '\0')
        i++;
    printf("%d", i);
}