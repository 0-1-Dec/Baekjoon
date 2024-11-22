#include <stdio.h>

int main(){
    int sum = 0, p, m, max = 0;
    for(int i = 0; i < 10; i++){
        scanf("%d %d", &m, &p);
        sum -= m; sum += p;
        if(max < sum)
            max = sum;
    }
    
    printf("%d", max);
}