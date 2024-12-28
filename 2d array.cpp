# include<stdio.h>
# include<conio.h>

int main(){
	// there are two sizes size1 and size 2 
	// size1 - column
	// size2 - row 
	int arr2[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
	int i ,j;
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			printf("arr2[%d][%d]=%d\n",i,j,arr2[i][j]);
		}
	}
	getch();
}
