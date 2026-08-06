void main(){
	int n,x,remainder,sum;
	printf("enter number: ");
	scanf("%d",&n);
	
	x=n;
	while(x>0){
		remainder=x%10;
		int fact=1,i=1;
		while(i<=remainder){
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		x=x/10;
	}
	
	if(sum==n)
	printf("strong number");
	else
	printf("not a strong number");
}
