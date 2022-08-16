#include<stdio.h>

int main()
{
int i;
char x;
printf("Enter a charcater: \n");
scanf("%c", &x);

if( (x>='a' && x<='z')||(x>='A' && x<='Z') ) // checking for valid input
{
for(i=0; i<5; i++)
{
    printf("%c,",x);
    if((x=='z')||(x=='Z'))
    {
        x = (x-26);
    }
    x++;
}
}   
else 
printf("Your input is not a character."); 

return 0;
}