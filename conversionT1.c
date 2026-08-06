#include<stdio.h>

void convert();
void main(){
	convert();
}
void convert()
{
	int minutes=150;
	
	int hours=minutes/60;
	int rem=minutes%60;
	
	printf("%d minutes = %d hours %d minutes",minutes,hours,rem);
	
} 