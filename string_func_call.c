#include<stdio.h>
void printstr(char abc[]);

int main(){
	char string[]="Arghya";
	char string2[]="Roy";
	printstr(string);
	printf("Is\n");
	printstr(string2);
	return 0;
}
void printstr(char abc[]){
	int i;
	for(i=0;abc[i]!=0;i++){
		printf("%c",abc[i]);
	}
	printf("\n");
}
