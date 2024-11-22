#include <stdio.h>

int main(){
    int k, q, r, b, kn, p;
    scanf("%d %d %d %d %d %d", &k, &q, &r, &b, &kn, &p);
    k = (k-1) * -1;
    q = (q-1) * -1;
    r = (r-2) * -1;
    b = (b-2) * -1;
    kn = (kn-2) * -1;
    p = (p-8) * -1;
    printf("%d %d %d %d %d %d", k, q, r, b, kn, p);
}