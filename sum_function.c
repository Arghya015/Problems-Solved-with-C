#include<stdio.h>
int sum(int a,int b); //declarin the funtion

int main(){
	int a,b;
	printf("Enter two number:\n");
	scanf("%d %d",&a,&b);
	

    sum(a,b); //calling the function
	return 0;
	}
	int sum(int a,int b) //defining the function
	{  
	printf("Answer of the Sum is : %d",a+b);
	return 0;
	}
    
