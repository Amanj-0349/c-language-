// storage class - used to specify the scope of a variable
/* auto - local
extern - global 
static - local
register - local
*/

/* 
# include<stdio.h>
int main()
{
	auto int x=10;
	printf("%d",x);
}
*/


/* 
# include<stdio.h>

extern int count=15;
int main()
{
	auto int x=10;
	printf("%d\n",x);
	printf("%d\n",count);
}
*/


/*
# include<stdio.h>
int main()
{
	static int x=0;
	x++;
	printf("x=%d\n",x);
}
*/


/*
# include<stdio.h>
int main()
{
	register int x=10;
	printf("%d",x);
}
*/




