#include<string.h>
#include<stdio.h>
void main(){
	char str[10];
	printf("enter a string: ");
	scanf("%s",str);
	strupr(str);
	printf("string in uppercase: %s",str);
	
}