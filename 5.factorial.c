#include<stdio.h>
int main(){
	int f=1,i,n;
	printf("Enter N : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("Factorial of %d : %d",n,f);
}