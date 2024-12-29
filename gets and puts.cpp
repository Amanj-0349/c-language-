// string i/o functions
// formatted i/o functions - printf(),scanf()
// unformatted i/o functions - getch() ,getchar(), putchar(),gets(),puts()

# include<stdio.h>


int main()
{
	char ch;
	char str[100];
	printf("enter the charcater");
	gets(str); // will take sequenec of character and do read only
	printf("we have entered");
	puts(str);  // used to write a sequenec of character character
	return 0;
	
}
