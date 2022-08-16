#include<stdio.h>

int main()
{

char b,ar[1024];
int i=0,j=0,k=0,l=0;

do
{
  scanf("%c", &b);

  ar[i]=b;

  if(((b>='a')&&(b<='z'))||((b>='A')&&(b<='Z')))
  {
      j++;
  }
  else if(b>='0'&&b<='9')
  {
      k++;
  }
  else
  {
      l++;
  }
  i++;
}while(b!='?'); 

printf("%d %d %d",j,k,l);

return 0;
}