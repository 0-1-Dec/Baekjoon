#include <stdio.h>

int main(){
    char a[16]; int sec = 0;
    scanf("%s",a);
    
    for(int i = 0; a[i] != '\0'; i++){
        int temp = 0;
        
        if(a[i] <= 'C')
            temp = 3;
        else if(a[i] <= 'F')
            temp = 4;
        else if(a[i] <= 'I')
            temp = 5;
        else if(a[i] <= 'L')
            temp = 6;
        else if(a[i] <= 'O')
            temp = 7;
        else if(a[i] <= 'S')
            temp = 8;
        else if(a[i] <= 'V')
            temp = 9;
        else if(a[i] <= 'Z')
            temp = 10;
            
        sec += temp;
    }
    printf("%d",sec);
}