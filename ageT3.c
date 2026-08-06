void classifyage(int age);
void main(){
	int age;
	    printf("Enter Age: ");
    scanf("%d",&age);
    classifyage(age);
}
void classifyage(int age)
{ if(age<12)
        printf("Child");
    else if(age<=19)
        printf("Teenager");
    else if(age<=59)
        printf("Adult");
    else
        printf("Senior");
}