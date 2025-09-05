#include<stdio.h>
int main(){
	int i,j,arr1[2][3];
	printf("Enter the elements of array:");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
        	scanf("%d",&arr1[i][j]);
        }
	}
	int arr2[2][3];
	printf("Enter the elements of array:");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
        	scanf("%d",&arr2[i][j]);
        }
	}
	printf("After adding two matrixes the  new one is:\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
        	printf("Row no.%d Column no. %d = %d",i,j,arr1[i][j] + arr2[i][j]);
        }
	}
	return 0;
}
