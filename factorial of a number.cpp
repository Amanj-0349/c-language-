# include <stdio.h>

int fact(int n)
{
	if(n==0){
		return 0;
	}
	else if(n==1){
		return 1;
	}
	else{
		return n*fact(n-1);
	}
}

int main(){
	int n ,f;
	printf("enter the number : - ");
	scanf("%d\t",&n);
	f=fact(n);
	printf("factorial is %d",f);
	
}
	

