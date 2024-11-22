#include <stdio.h>

int main(){
    int a[4]; int sum = 0;
    for(int i = 0; i < 3; i++){
        scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);
        sum = a[0] + a[1] + a[2] + a[3];
        switch(sum){
            case 0:
                printf("%c\n", 'D');
                break;
            case 1:
                printf("%c\n", 'C');
                break;
            case 2:
                printf("%c\n", 'B');
                break;
            case 3:
                printf("%c\n", 'A');
                break;
            case 4:
                printf("%c\n", 'E');
                break;
        }
    }
}