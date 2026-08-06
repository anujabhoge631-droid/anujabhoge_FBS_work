void armstrong(int n);
void main(){
	int n;
	printf("enter number: ");
	scanf("%d",&n);
	armstrong(n);
}
void armstrong(int n){
	int x,remainder,sum;
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