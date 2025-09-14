#include<stdio.h>
void printdString(char arr[]);
int countLength(char arr[]);

int main(){
	char myid[1000];
	fgets(myid,1000,stdin);
	printf("length is %d", countLength(myid));
	return 0;
	}
int countLength(char arr[]){
	int count = 0;
	int i;
	for(i=0; arr[i]!='\0';i++){
		count++;
	}
	return count-1;
}	
void printdString(char arr[]){
	int i;
	for(i=0; arr[i]!='\0';i++){
		printf("%s",arr[i]);
	}
	printf("\n");
}
