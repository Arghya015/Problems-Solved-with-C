#include<stdio.h>
int main()
{

 int n,i,m;
 printf("Enter fisrt number:");
 scanf("%d",&n);
 
 printf("Enter last range:");
 scanf("%d",&m);
 printf("Odds are:\n");
 
 
 for(i=n;i<=m;i++){
 	if(i%2!=0){
 		printf("%d\n",i);
 	}}
		return 0;
}
