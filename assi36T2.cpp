#include<stdio.h>
int perfect();
 int main()
{
    if(perfect())
	
	printf("perfect number");
	else
	printf("not a perfect number");
	return 0;
	
} 
int perfect(){
	int n,i=1,sum=0;
	printf("enter number: ");
	scanf("%d",&n);
	
	while(i<n){
		if(n%i==0)
		sum=sum+i;
		i++;
	}
	if(sum==n)
	return 1;
	else
	return 0;
}