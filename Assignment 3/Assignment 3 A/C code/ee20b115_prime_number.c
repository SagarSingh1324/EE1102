#include<stdio.h>

int main()
{
    int n,i=2,k=1;
    printf("Enter a number:\n");
    scanf("%d",&n);
   
    if(n<0)
    n = -n;

    if((n==0)||(n==1))
    {
    printf("Number entered is neither prime nor composite.");
    }
    else{

    while(k!=0)      // checking for prime number
    {
      k = n%i;
      i++;    
    }
   
   if(i==(n+1))
   {
       printf("The absolute value of number you entered is a prime number.");
   }
   else
   {
       printf("The absolute value of number you entered is a composite number.");
   }
    }
    return 0;
}