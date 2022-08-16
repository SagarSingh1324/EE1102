#include<stdio.h>

int main()
{
  int alp=0,dig=0,sym=0,tot;
  char input;

  printf("Enter characters continuously: \n");

  do
  {
    input = getchar();

    if(((input>=65)&&(input<=90))||((input>=97)&&(input<=122)))
    {
        alp++;
    }
    else if((input>=48)&&(input<=57))
    {
        dig++;
    }
    else 
    {
        sym++;
    }

  }while(input!=63);
  
  tot = alp+dig+sym;

  printf("Total no. of characters entered: %d\n",tot);
  printf("Total no. of alphabets entered: %d\n",alp);
  printf("Total no. of digits entered: %d\n",dig);
  printf("Total no. of symbols entered: %d\n",sym);

 return 0;
} 