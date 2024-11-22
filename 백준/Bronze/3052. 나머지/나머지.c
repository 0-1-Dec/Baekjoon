int main(){
    int a[10]; int x = 0, y = 0;
    for(int i = 0; i < 10; i++){
        scanf("%d", &a[i]);
        a[i] %= 42;
    }
    
    for(int i = 0; i < 10; i++){
        for(int j = i+1; j < 10; j++){
            if(a[i] == a[j])
                x++;
        }
        if(x == 0)
            y++;
        x=0;
    }
    
    printf("%d", y);
    return 0;
}