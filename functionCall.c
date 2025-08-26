#include<stdio.h>
void bonjour();
void namaste();


int main(){
	char ch;
    printf("Enter your identity!\n");
    printf("Enter F for France, F for India\n");
    scanf("%c",&ch);
    if(ch=='F')
    bonjour();
    else if(ch=='I')
    namaste();
    else
    printf("enter valid ch!");
	}
	
void bonjour(){
	printf("welcome to france\n");
}
void namaste(){
	printf("welcome to india\n");
}
