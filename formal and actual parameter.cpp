#include <stdio.h>
// formal parameter - declaration of parameter at the time of function definition
int sum(int a, int b)
{
	return a+b;
}


int main()
{
	// actual parameter - at the time of calling 
	int res  = sum(30,50);
	printf("Sum is : %d",res);
	return 0;
}



