#include<stdio.h>
void printstr(char arr[]);
int main(){
	char firstname[]="Arghya";
	char lastname[]="Roy";
	printstr(firstname);
	printstr(lastname);
	return 0;
}
void printstr(char arr[]){
	int i;
	for(i=0;arr[i]!='\0';i++){
		printf("%c",arr[i]);
	}
	printf("\n");
}
