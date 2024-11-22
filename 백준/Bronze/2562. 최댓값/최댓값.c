#include <stdio.h>

int main(){
    int i,num,max,count;
    int list[9];
    
    for(i=0;i<9;i++){
        scanf("%d\n",&num);
        list[i]=num;
    }
    max=list[0];
    count=0;
    for(i=0;i<9;i++){
        if(list[i]>max){
            max = list[i];
            count=i;
        }
    }
    printf("%d\n",max);
    printf("%d\n",count+1);
    
}