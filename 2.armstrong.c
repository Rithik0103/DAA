#include<stdio.h>
#include<math.h>
int main(){
	int n,sum=0,t,r,u=0;
	printf("Enter the Number : ");
	scanf("%d",&n);
	t=n;
	while(t!=0){
		t/=10;
		u++;
	}
	t=n;
	while(t!=0){
		r=t%10;
		r=pow(r,u);
		sum+=r;
		t/=10;
	}
	if(sum==n){
		printf("Armstrong...");
	}
	else{
		printf("Not Armstrong...");
	}
}