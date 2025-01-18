// 1 d array 
# include<stdio.h>
int main()
{
	int arr[]={1,2,3,4},sum=0;
	for(int i=0;i<5;i++)
	{
		sum+=arr[i];
	}
	printf("sum %d",sum);
	return 0;
}
// 2d array 
// addition of two matrix
# include<stdio.h>
int main()
{
	int a[2][2]={{1,2},{3,4}};
	int b[2][2]={{5,6},{7,8}};
	int c[i][j];
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d",c[i][j]);
		}
		printf("\n")
	}
	return 0;
}
