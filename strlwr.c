#include<string.h>
#include<stdio.h>
void main(){
	char str[10];
	printf("enter a string: ");
	scanf("%s",str);
	strlwr(str);
	printf("string in lowercase: %s",str);
	
}