// string i/o functions
// formatted i/o functions - printf(),scanf()
// unformatted i/o functions - getch() ,getchar(), putchar(),gets(),puts()

# include<stdio.h>


int main()
{
	char ch;
	char str[100];
	printf("enter the charcater");
	ch=getchar(); // will take only single character and do read only
	printf("we have entered");
	putchar(ch);  // used to write a single character
	return 0;
	
}
