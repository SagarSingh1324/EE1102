#include<stdio.h>

int main()
{ 
  int n,k,r=1,i,j,factk=1;  
  printf("Enter the n and k for calculating nCk :\n");
  scanf("%d",&n);
  scanf("%d",&k);
if(n>k)
{  
  if(n/2<k)
  {
   for(j=1;j<=n-k;j++)
   factk = factk*j;
 
   for(i=0;i<(n-k);i++)
    {
      r = r*(n-i);
    }
    
    r = r/factk;
    printf("The value of nCk is: %d",r);
  }
  else if(n/2>k)
  {
    for(j=1;j<=k;j++)
   factk = factk*j;
 
   for(i=0;i<(k);i++)
    {
      r = r*(n-i);
    }
    
    r = r/factk;
    printf("The value of nCk is: %d",r);

  }  
}
else if(n==k)
{
   printf("The value of nCk is: 1");
}
else if(n<k)
{
 printf("The value of nCk is:0");
}
    return 0;
}