// linear search 

# include<stdio.h>

int search(int arr[],int n,int key)
{
	for(int i=0;i<=n;i++)
	{
		if(arr[i]==key){
			return i;
		}
	}
	return -1;
}




