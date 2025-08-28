#include<stdio.h>
void price(float value); //declarin the funtion

int main(){
	float value;
	printf("Enter price value:\n");
	scanf("%f",&value);
	

    price(value); //calling the function
	return 0;
	}
	void price(float value) //defining the function
	{  
	value=value+(0.18*value);
	printf("Final Value is:%f",value);
	
	}
