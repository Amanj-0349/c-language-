# include<stdio.h>

int main()
{
	int num , originalnum ,revnum =0,rem;
	printf("enter the number");
	scanf("%d",&num);
	
	originalnum = num;
	
	while(num!=0){
		rem = num %10;
		revnum = revnum*10+rem;
		num /=10;
	}
	if(originalnum==revnum){
		printf("the no is palindrome");
	}
	else{
		printf("no is not palindrome");
	}
	return 0;
}
