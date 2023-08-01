#include<stdio.h>
int main(){
	int n1,n2,gcd,i,n;
	printf("Enter the two numbers :\n");
	scanf("%d%d",&n1,&n2);
	n=((n1<n2)? n1 : n2);
	for(i=2;i<=n;i++){
		if(n1%i==0 && n2%i==0){
			gcd=i;
		}
	}
	printf("GCD of %d and %d is %d",n1,n2,gcd);
}