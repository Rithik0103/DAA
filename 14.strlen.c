#include<stdio.h>
#include<string.h>
int main(){
	char a[20];
	printf("Enter String : ");
	gets(a);
	int n=strlen(a);
	printf("String length : %d",n);
}
