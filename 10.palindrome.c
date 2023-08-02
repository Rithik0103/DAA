#include<stdio.h>
#include<string.h>
int main(){
	char a[20],b[20];
	printf("Enter String : ");
	gets(a);
	int i,l,f=0;
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]!=a[l-i-1])
			f=1;
	}
	if(f==1){
		printf("Its not a Palindrome.");
	}
	else{
		printf("Its a Palindrome.");
	}
}
