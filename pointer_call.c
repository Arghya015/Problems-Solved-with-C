#include<stdio.h>
void sqr(int number);
void _sqr(int number);
int main()
{
	int number=4;
	sqr(number);
	printf("number=%d\n", number);
	_sqr(&number);
	printf("number=%d\n", number);
	
	return 0;
}
void sqr(int *number)
{
	*number=(*number)*(*number);
	printf("square=%d\n", *number);
}
