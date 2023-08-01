#include<stdio.h>
int main(){
	int a[10],n,i,j,t;
	printf("Enter Range : ");
	scanf("%d",&n);
	printf("Enter array values :");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("Sorted array : \n");
	for(i=0;i<n;i++)
		printf("%d, ",a[i]);
}