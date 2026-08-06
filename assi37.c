void main(){
	int n;
	long fact=1;
	printf("enter number: ");
	scanf("%d",&n);
	
	while(n>0){
		fact=fact*n;
		n=n-1;
	}
		printf("factorial=%ld",fact);
	
	
}