// void pointer
# include<stdio.h>

int main()
{
	int n =10;
	void *ptr; // null pointer 
	ptr = &n; 
	printf("value of n %d \n",*(int *)ptr);
	return 0;
}
