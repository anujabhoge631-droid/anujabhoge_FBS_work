void main(){
	int n,x,remainder,sum;
	printf("enter number: ");
	scanf("%d",&n);
	
	x=n;
	while(x>0){
		remainder=x%10;
		sum=sum+(remainder*remainder*remainder);
		x=x/10;
	}
	if(sum==n)
	printf("Armstrong number");
	else
	printf("not a armstrong number");
}