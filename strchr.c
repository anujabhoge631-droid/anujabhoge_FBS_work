#include<stdio.h>
void main(){
	char str[10];
	char ch;
	-
	printf("enter string: ");
	scanf("%s",str);
	
	printf("enter character to search: ");
	scanf(" %c", &ch);
	
	if(strchr(str,ch)!=NULL){
		printf("character found");
	}
	else{
		printf("character not found");
	}
}