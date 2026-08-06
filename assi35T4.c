#include<stdio.h>
int armstrong(int n);
void main(){
	int n,result;
	printf("enter number: ");
	scanf("%d",&n);
	result=armstrong(n);
	if(result==n)
	printf("Armstrong number");
	else
	printf("not a armstrong number");
}

int armstrong(int n){
	int x,remainder,sum;
	x=n;
	while(x>0){
		remainder=x%10;
		sum=sum+(remainder*remainder*remainder);
		x=x/10;
	}
	return sum;
}