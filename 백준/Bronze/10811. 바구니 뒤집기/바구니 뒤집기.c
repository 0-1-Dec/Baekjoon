#include <stdio.h>

int main(){
    int cnt, temp, a, b, size, i;
    scanf("%d %d", &size, &cnt);
    int x[size];
    
    for(i = 0; i < size; i++){
        x[i] = i+1;
    }
    
    for(i = 0; i < cnt; i++){
        scanf("%d %d", &a, &b); a--; b--;
        while(a < b){
            temp = x[a];
            x[a] = x[b];
            x[b] = temp;
            a++; b--;
        }
    }
    
    for(i = 0; i < size; i++){
        printf("%d ", x[i]);
    }
    
    return 0;
}