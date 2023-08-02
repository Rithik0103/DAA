#include<stdio.h>
int main(){
	int a[10],r,i,s,j,t;
	printf("Enter range : ");
	scanf("%d",&r);
	printf("Enter Elements : ");
	for(i=0;i<r;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter Search element : ");
	scanf("%d",&s);
	for(i=0;i<r;i++){
		for(j=i;j<r;j++){
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("Sorted elements :\n");
	for(i=0;i<r;i++)
		printf("%d  ",a[i]);
	int b=0,e=r-1;
	int mid=(b+e)/2;
	while(b<=e){
	
		if(a[mid]<s)
			b=mid+1;
		else if(a[mid]==s){
			printf("\nElement found, Position 1 : %d",mid+1);
			break;
		}
		else
			e=mid-1;
		mid=(b+e)/2;
	}
	if(b>e)
		printf("\nElement not found...");
}
