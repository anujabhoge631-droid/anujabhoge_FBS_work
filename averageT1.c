#include<stdio.h>
void average();
void main(){
	average();
}
void average()
{
	int a=10, b=20, c=30, d=40, e=50;
	float avg=(a+b+c+d+e)/5.0;
	printf("average=%.2f",avg);
	
}