# include<stdio.h>

int main(){
	int n , first =0, second =1,next;
	printf("enter the number of terms in a series : ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		if(n<=1){
			next=i;
		}
		else{
			next = first+second;
			first = second ;
			second= next;
		}
		printf("%d",next);
	}
	return 0;
}
