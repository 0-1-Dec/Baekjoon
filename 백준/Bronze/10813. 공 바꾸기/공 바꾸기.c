int main(){
    int a,b,temp, cnt, size;
    scanf("%d %d", &size, &cnt); int x[size];
    for(int i = 0; i < size; i++){
        x[i] = i+1;
    }
    
    for(int i = 0; i < cnt; i++){
        scanf("%d %d", &a, &b);
        temp = x[a-1];
        x[a-1] = x[b-1];
        x[b-1] = temp;
    }
    
    for(int i = 0; i < size; i++){
        printf("%d ", x[i]);
    }
    
    return 0;
}