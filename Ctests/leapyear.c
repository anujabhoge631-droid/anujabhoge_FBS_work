void main(){
	int year;
	scanf("%d",&year);
	
	if((year%400==0)||((year%4==0)&&(year%100!=0)))
	printf("given year is a leap year");
	else
	printf("not a leap year");
	
}