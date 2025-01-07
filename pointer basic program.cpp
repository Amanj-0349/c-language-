# include<stdio.h>

int main()
{
	// * astrisk (defrencing operator) - used to make pointer
	// address operator (&) - used to returns the address of a variable or to access the address of a variable to pointer
	int m = 100;
	int *ptr = &m;
	printf("the value of a variable :%d\n",m);
	printf("The address of that variable %p\n",&m);
	printf("the address of variable m is using %p",ptr);
}


// pointer - is basically used for the dynamic memory allocations  , like for functions - malloc , calloc and free 

