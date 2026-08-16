#include<string.h>
#include<stdio.h>
void main(){
	char str[100], rev[150];
	
	printf("enter a string: ");
	scanf("%s",str);
	 strcpy(rev,str);
	 strrev(rev);
	 
	 if(strcmp(str,rev)==0)
	 printf("palindrome");
	 else
	 printf("not palindrome");
}