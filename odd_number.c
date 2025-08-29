#include<stdio.h>
int main(){
	int i,n,m;
	printf("Enter the first number:");
	scanf("%d",&n);
    printf("Enter the second number:");
	scanf("%d",&m);
	
	printf("All the odds in given range:");
	for(i=n;i<=m;i++){
		if(i%2!=0)
	    	printf("%d\n",i);
	}
	return 0;
}
