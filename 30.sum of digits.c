#include<stdio.h>
int main(){
	int sum=0,n,t;
	printf("Enter Number : ");
	scanf("%d",&n);
	while(n!=0){
		t=n%10;
		sum+=t;
		n/=10;
	}
	printf("Sum of Digits : %d",sum);
}
