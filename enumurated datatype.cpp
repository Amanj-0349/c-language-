/*
# include<stdio.h>

enum Colors {red,green,yellow,black};
int main()
{
	enum Colors color;
	color = black;
	printf("value of black %d\n",color);
	return 0;
}
*/

# include<stdio.h>

enum day { mon =1,tue = 2,wed ,thur ,fri=8};
int main()
{
	enum day d;
	d = wed;
	printf("value of wed %d\n",d);
	return 0;
}
