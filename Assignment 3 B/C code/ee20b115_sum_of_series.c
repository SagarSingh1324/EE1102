#include<stdio.h>

int main()
{
  float i,sum=0,n;
  int j;

   printf("Enter the integer:\n");
   scanf("%f",&n);

   if(n<=0)
   {
    printf("Invalid input.");
   }
   else
   {
   printf("Sum of series = ");
   for(i=1.0;i<=n;i++)
   {
    j = i;
    if(i!=n)
    {
     printf("(1/%d)+",j);
    }else
    {
     printf("(1/%d)",j);
    }
     sum = sum + (1/i);
   }
   printf("= %f",sum);
   }
return 0;
}