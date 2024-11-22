#include <stdio.h>

int main(){
    char a[101]; int cnt = 0; char temp = '0';
    scanf("%s", a);
    
    for(int i = 0; a[i] != '\0'; i++){
        if(temp != '0'){
            if((temp == 'l' || temp == 'n') && a[i] == 'j'){
                temp = '0';
                continue;   
            }
            
            if(temp == 'd' && a[i] == 'z' && a[i+1] == '='){
                temp = '0';
                continue;
            }
            else
                temp = '0';
        }
        
        if(a[i] == 'l' || a[i] == 'n' || a[i] =='d'){
            temp = a[i];
        }
        
        if(a[i] == '-' || a[i] == '=')
            continue;
            
        cnt++;
    }
    printf("%d", cnt);
    return 0;
}