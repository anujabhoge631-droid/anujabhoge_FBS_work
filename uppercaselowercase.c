
void uppercaselowercase();
void main()
{
uppercaselowercase();	
}
void uppercaselowercase()
{
 char ch;
 printf("enter a char : ");
 scanf("%c",&ch);
  
  if(ch>='A'&& ch<='Z')
  printf("Given character is in uppercase");
   else if(ch>='a'&& ch<='z')
   printf("Given character is in lowercase");
}