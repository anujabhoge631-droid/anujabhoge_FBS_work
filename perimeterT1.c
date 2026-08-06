#include<stdio.h>
void perimeter();
void main(){
	perimeter();
}
void perimeter()
{
	int length=15,width=10;
	int perimeter=2*(length+width);
	printf("perimeter=%d",perimeter); 
}