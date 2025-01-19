// when a function call itself inside its function body is called recursion
# include<stdio.h>


int numbers(int n)  //5  
{
	if (n==0){
		return -1;
	}
	numbers(n-1); // numbers(0 )
	printf("%d",n); // 5 4 3 2 1 
}

int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	numbers(n); // 5
	printf("\n");
	return 0;
	
}
