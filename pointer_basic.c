#include<stdio.h>
void sqr(int n);
int main()
{
	int number=4;
	sqr(number);
	printf("number=%d\n", number);
	return 0;
}
void sqr(int number)
{
	number=number*number;
	printf("square=%d\n",number);
}

	
