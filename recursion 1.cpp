// recursion - when the function call itself is known as recurion 
/*

type functionname(args){
//function statements
// base conditions 
// recursion case
}

*/

# include <stdio.h>

int sum(int n){
	if (n==0){
		return 0;
	}
	// recursive condition
	
	int ans = n+sum(n-1);
	return ans;
}

int main(){
	int n =5;
	int total = sum(n);
	printf("enter the first n natural no %d\t%d",n,total);
	return 0;
}


