# include<stdio.h>

enum day {mon,tue,wed,thur,fri,sat,sun};
int main()
{
	enum day d;
	d = thur;
	switch(d){
		case mon:
			printf("it is moday\n");
			break;
		case wed:
			printf("it is wednesday\n");
			break;
		case sun:
			printf("it is sunday\n");
			break;
		default:
			printf("it is a weekday\n");
	}
	return 0;
}
