# include<stdio.h>
# include<conio.h>

int main()
{
	int arr[4];
	int i , j;
	// first for loop is for intialization of the array at run time 
	for(i=0;i<=4;i++){
		scanf("%d",&arr[i]);
	}
	for(j=0;j<=4;j++){
		printf("%d\t",arr[j]);
	}
getch();
}
