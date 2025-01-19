// structure - group of multiple variables (same or diffrent types) into a single unit .
#include<stdio.h>
#include<string.h>
struct student{
	int id;
	char name[4];
	float marks;
};

int main()
{
	struct student s1;
	s1.id=101;
	s1.marks=90.5;
	strcpy(s1.name,"yana");
	printf("id %d\n",s1.id);
	printf("marks %f\n",s1.marks);
	printf("name %s",s1.name);
	return 0;		
}



