// pass by value 

#include <stdio.h>

void swap(int n1 , int n2)
{
	int temp = n1;
	n1=n2;
	n2=temp;
	printf("values in function %d, %d",n1,n2);	
}

int main()
{
	int n1=2;
	int n2=5;
	
	printf("The values before swaping %d , %d \n",n1,n2);
	swap(n1,n2);
	printf("The values after swapping %d,%d \n",n1,n2);
	return 0;
}
