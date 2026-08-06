void price();
void main(){
	price();
}
void price()
{
    float price, discount;
    char student;

    printf("Enter Price: ");
    scanf("%f",&price);

    printf("Are you a student (y/n): ");
    scanf(" %c",&student);

    if(student=='y' || student=='Y')
    {
        if(price>500)
            discount=price*0.2;
        else
            discount=price*0.1;
    }
    else
    {
        if(price>600)
            discount=price*15/100;
        else
            discount=0;
    }

    printf("Discount = %.2f",discount);
    printf("\nFinal Price = %.2f",price-discount);

}