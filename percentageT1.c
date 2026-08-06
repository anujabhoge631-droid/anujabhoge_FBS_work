#include<stdio.h>
void result();
void main(){
	result();
}
void result()
{
	int m1=70,m2=75,m3=65,m4=80,m5=90;
	int total =m1+m2+m3+m4+m5;
	float percentage=total/5;
	printf("total marks=%d\n",total);
	printf("percentage=%.2f%%",percentage);

}