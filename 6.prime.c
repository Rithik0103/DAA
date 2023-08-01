#include<stdio.h>
int main(){
	int n,i,c=0;
	printf("Enter N : ");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c<=1)
	{
		printf("Its a Prime Number...");
	}
	else{
		printf("Its not a Prime Number...");
	}
}