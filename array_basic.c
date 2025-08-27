#include<stdio.h>
int main(){
	int i,j,arr2d[2][3];
	printf("Enter the elements of array:");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
        	scanf("%d",&arr2d[i][j]);
        }
	}
		printf("Displaying the elements of 2D array:\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
	    	printf("Row no. %d , Column no. %d = %d\n",i,j,arr2d[i][j]);
    	}
   }
	return 0;
}
