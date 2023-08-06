#include<stdio.h>
int main(){
	int n,i;
	printf("Enter list limit : ");
	scanf("%d",&n);
	int a[n];
	printf("Enetr list elements : \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("List Elements : \n");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
	int in,p;
	printf("\nEnetr Element to insert : ");
	scanf("%d",&in);
	printf("Enetr Position : ");
	scanf("%d",&p);
	p=p-1;
	a[n]=0;
	for(i=n-1;i>=p;i--){
		a[i+1]=a[i];
	}
	a[p]=in;
	n++;
	printf("List Elements : \n");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
}
