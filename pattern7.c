void main(){
    int num=1;
	int row,col,n=4;
	
	for(int row=1; row<=n;row++){
		for(int col=1; col<=row; col++){
			printf(" %d ",num);
			num++;
		}
		printf("  ");
	
	printf("\n");
}
}
