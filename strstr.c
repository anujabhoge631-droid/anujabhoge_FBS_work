#include<string.h>
#include<stdio.h>
void main(){
	char str[20];
	char sub[10];
	
	printf("enter a string: ");
	scanf("%s",str);
	
	printf("enter a substring: ");
	scanf("%s",sub);
	
	if(strstr(str,sub)!=NULL)
	printf("substring is found");
	else
	printf("substring is not found");
}