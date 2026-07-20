#include<stdio.h>
int main(){
	int minutes=150;
	
	int hours=minutes/60;
	int rem=minutes%60;
	
	printf("%d minutes = %d hours %d minutes",minutes,hours,rem);
	
	return 0;
} 