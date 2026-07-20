#include<stdio.h>
int main(){
	int a=30,b=40, temp;
	
	temp=a;
	a=b;
	b=temp;
	
	printf("after swap:\n ");
	printf("a=%d\n",a);
	printf("b=%d",b);
	
	return 0;
}