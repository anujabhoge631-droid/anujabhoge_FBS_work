int print(int n);
void main(){
     int result;
	result=print(10);
	
	printf("\nReturned value=%d",result);
}
int print(int n){
	int i=1; 
	while(i<=10){
	printf(" %d", i);
	i++;}
	return n;
}