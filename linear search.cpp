# include <stdio.h>

int main()
{
	int i,n,key;
	int found=0;
	int arr[6] = {10,20,30,40,50,60};
	printf("enter the element to serach");
	scanf("%d", &key);
	
	for(i=0;i<6;i++)
	{
		if (arr[i]==key){
			found = 1;
			printf("element %d found at position %d\n",key,i+1);
			break;
		}
	}
	if (!found){
		printf("element not found");
	}
	return 0;
	
}
