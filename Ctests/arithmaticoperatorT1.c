void main(){
	int hh,min,sec,totalseconds;
	
	printf("enter a hours: ");
	scanf("%d",&hh);
	
	printf("enter a minutes: ");
	scanf("%d",&min);
	
	printf("enter a seconds: ");
	scanf("%d",&sec);
	
	totalseconds=(hh*3600)+(min*60)+sec;
	printf("Totalseconds=%d\n",totalseconds);
		
	
}