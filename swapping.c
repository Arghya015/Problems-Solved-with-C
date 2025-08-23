#include<stdio.h>
int main()
{
	int a,b;
	printf("give a=");
	scanf("%d",&a);
	printf("give b=");
	scanf("%d",&b);
	
    
    a=a+b; //asssigning the value of a+b in a
    b=a-b; //now b=(a+b)-b= a
    a=a-b; //now a=(a+b)-b=(a+b)-a= b
    
    

     printf("After swapping:\n");
	 printf("a=%d\n",a);
	 printf("b=%d\n",b);
	 
	 return 0;
	 
}
