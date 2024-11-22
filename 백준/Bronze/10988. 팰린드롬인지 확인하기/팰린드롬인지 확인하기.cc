#include <stdio.h>
#include <string.h>
int main(void){
	char string[101]; char string1[101] = {};
	scanf("%s", &string); int length = strlen(string); int i; int j=0;
	for(i=length-1; 0<=i; i--){
		string1[j] = string[i];
		j++;
	}
	if(strcmp(string, string1)==0) printf("1");
	if(strcmp(string, string1)!=0) printf("0");
	return 0;
}