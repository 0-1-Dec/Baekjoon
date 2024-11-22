#include <stdio.h>

int main(){
    int a, b, c, ans, num;
    scanf("%d", &num);
    scanf("%d %d %d", &a, &b, &c);
    if(a > num)
        ans = num;
    else
        ans = a;
    
    if(b > num)
        ans += num;
    else
        ans += b;
    
    if(c > num)
        ans += num;
    else
        ans += c;
    
    printf("%d", ans);
}