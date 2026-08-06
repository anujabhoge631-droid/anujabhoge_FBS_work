void vowelsconsonents();
void main(){
	vowelsconsonents();
}
void vowelsconsonents()
{
  char ch;
  printf("enter a char: ");
  scanf("%c",&ch);
  
  if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'||ch=='u')
  printf("given character is a vowels");
  else
  printf("given character is a consonents");
  
}