#include<stdio.h>
#include<string.h>
int main(){
	char a[20],b[20];
	printf("Enter a String :");
	gets(a);
	strcpy(b,a);
	printf("String : %s",b);
}
