#include<stdio.h>
int main()
{
	int e=0,t=1,f=0,n,i;
	printf("Enter n : ");
	scanf("%d",&n);
	printf("Fibonacci series :\n");
	for(i=0;i<n;i++){
		e=t;	
		t=f;
		printf("%d, ",f);
		f=e+t;
	}
}