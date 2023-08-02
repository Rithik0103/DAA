#include<stdio.h>
void mer(int a[],int l,int m,int r){
	int i,j,k;
	int n1=m-l+1;
	int n2=r-m;
	int L[n1],R[n2];
	for(i=0;i<n1;i++)
		L[i]=a[l+i];
	for(j=0;j<n2;j++)
		R[j]=a[m+1+j];
	i=0;
	j=0;
	k=l;
	while(i<n1 && j<n2){
		if(L[i]<=R[j]){
			a[k]=L[i];
			i++;
		}
		else{
			a[k]=R[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		a[k]=L[i];
		i++;
		k++;
	}
	while(j<n2){
		a[k]=R[j];
		j++;
		k++;
	}
}
void ms(int a[],int l,int r){
	if(l<r){
		int m=l+(r-l)/2;
		ms(a,l,m);
		ms(a,m+1,r);
		mer(a,l,m,r);
	}
}
int main(){
	int n,i;
	printf("Enter Range : ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements :\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	ms(a,0,n-1);
	printf("\nSorted Array :\n");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
	return 0;
}
