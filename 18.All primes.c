#include<stdio.h>
int main(){
	int n,j,i,c=0;
	printf("Enter N : ");
	scanf("%d",&n);
	printf("Prime Numbers from 1 to %d:-\n",n);
	for(i=2;i<=n;i++)
	{
		for(j=2;j<=i;j++)
		if(i%j==0)
		{
			c++;
		}
		if(c<=1)
			printf("%d  ",i);
		c=0;
	}
}
