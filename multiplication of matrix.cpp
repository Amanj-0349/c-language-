#include <stdio.h>

int main(){
	int a[10][10] ,b[10][10] , res[10][10];
	int r1,r2,c1,c2;
	
	printf("enter rows and columns for the first matrix");
	scanf("%d %d",&r1,&c1);
	
	printf("enter rows and columns for the second matrix");
	scanf("%d %d",&r2,&c2);
	
	// condition for multiplication 
	if (c1 != c2){
		printf("error matrix multiplication not alloweed");
		return 1;
	}
	
	printf("enter the element of first matrix named as A : \n ");
	
	for(int i=0;i<r1;i++){
		for(int j=0;j<c1;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("enter the element of second matrix named as B : \n ");
	
	for(int i=0;i<r2;i++){
		for(int j=0;j<c2;j++){
			scanf("%d",&b[i][j]);
		}
	}
	
	// multiply 
	
	for(int i=0;i<r1;i++){
		for(int j=0;j<c1;j++){
			res[i][j]=0;
			for(int k=0;k<c1;k++){
				res[i][j] += a[i][k]*b[k][j];
			}
		}
	}
	
	// display
	
	for(int i = 0;i<r1;i++){
		for(int j=0;j<c1;j++){
			printf("%d",res[i][j]);
		}
		printf("\n");
	}
	return 0;
}
