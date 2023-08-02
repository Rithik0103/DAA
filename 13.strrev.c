#include<stdio.h>
#include<string.h>
int main(){
	char a[20];
	printf("Enter String : ");
	gets(a);
	int i,n=strlen(a);
	char b[n];
	for(i=0;i<n;i++){
		b[n-i-1]=a[i];
	}
	printf("Reverse String : %s",b);
}
