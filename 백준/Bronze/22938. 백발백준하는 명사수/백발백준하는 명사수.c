#include <stdio.h>
#include <math.h>

int main(){
    double a1, a2, ar, b1, b2, br, rplus;
    double d;
    scanf("%lf %lf %lf", &a1, &a2, &ar);
    scanf("%lf %lf %lf", &b1, &b2, &br);
    rplus = ar + br;
	d = sqrt((a1 - b1)*(a1 - b1) + (a2 - b2)*(a2 - b2));
	if(d < rplus) printf("YES");
    else printf("NO");
}