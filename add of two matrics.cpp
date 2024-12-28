# include<stdio.h>
# include<conio.h>

int main(){ 
	int a[4][3],b[4][3],c[4][3];
	int i,j,m,n;
	printf("enter the no of rows and columns :");
	scanf("%d%d",&m,&n);
	printf("\n enter the elements of A matrics");
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("\t%d",&a[i][j]);
		}
	}
	
	printf("\n enter the elements of B matrics");
	for(i=0;i<m;i++){
		printf("\n");
		for(j=0;j<n;j++){
			scanf("\t%d",&a[i][j]);
		}
	}
	// code for reading both matrices
	
	// code for addition 
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			c[i][j]=a[i][j]+b[i][j];
			printf("\t%d",c[i][j]);
		}
	}
	getch();
}
