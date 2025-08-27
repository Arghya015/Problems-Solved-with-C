#include<stdio.h>
int main(){
	int i,j,arr2d[2][3];
	printf("Enter the elements of array:");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
        	scanf("%d",&arr2d[i][j]);
        }
	}	printf("Transpose of the matrix:\n");
	for(j=0;j<2;j++){
		for(i=0;i<3;i++){
	    	printf("Row no. %d , Column no. %d = %d\n",i,j,arr2d[j][i]);
    	}
   } return 0;
}
