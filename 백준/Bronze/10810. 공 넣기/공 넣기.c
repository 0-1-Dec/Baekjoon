#include <stdio.h>
#include <stdlib.h>

int main(void){
    int m;
    int n;
    int *a;
    int j,k,l;
    scanf("%d %d" , &n ,&m);
    a = (int *)calloc(n, sizeof(int));
    
    for(int i = 0; i < m ; i++){
        scanf("%d %d %d" , &j,&k,&l);
        for(j; j<=k;j++){
            a[j-1]=l; 
        }
    }
    
    for(int z=0; z<n; z++)
        printf("%d " , *(a+z));
    free(a);   
    return 0; 
}