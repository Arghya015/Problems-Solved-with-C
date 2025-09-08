#include<stdio.h>
int main(){
	char str[56];
	gets(str);
	printf("Using printf func : %s\n",str);
	puts(str);
	return 0;
}
