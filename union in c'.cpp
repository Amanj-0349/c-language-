#include<stdio.h>
union student{
	int id;
	char name[4];
	float marks;
};

int main()
{
	union student s1;
	s1.id=101;
	s1.marks=90.5;
	strcpy(s1.name="yana");
	printf("id %d\n",s1.id);
	printf("marks %f\n",s1.marks);
	printf("name %s\n",s1.name);
	return 0;		
}

// shares same memory locations
// only one member will store a value at a time





