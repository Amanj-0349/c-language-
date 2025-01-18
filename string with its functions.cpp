// strings 

# include<string.h>
# include<stdio.h>
int main(){
	
	char str1[20]="hello";
	char str2[20]="yana";
	char res[20];
	printf("length of string %d\n", strlen(str1));
	strcpy(res,str1);
	printf("after copy %s\n",res) ;
	int str3 = strcmp(str1,res);
	if(str3==0){
		printf("str1 and res are equal\n");
	}
	else if(str3<0){
		printf("str1 is less than res\n");
	}
	else{
		printf("str1 is greater than res\n");
	}
	
	strcat(str1,str2);
	printf("after concat: %s\n",str1);
	return 0;
	
	
}

