#include<stdio.h>
#include<math.h>
int main()
{
	int year;
	printf("Enter year:");
	scanf("%d",&year);
	
	
	if(year%4==0 || year%400==0)
	{
		printf("leapyear");
	}

	else
	{
		printf("0");
	}
	return 0;
}
