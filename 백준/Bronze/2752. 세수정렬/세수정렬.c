#include <stdio.h>

int main(){
    int temp; int a[3];
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    for(int i = 0; i < 2; i++){
        for(int j = i+1; j < 3; j++){
            if(a[i] >= a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    printf("%d %d %d", a[0], a[1], a[2]);
}