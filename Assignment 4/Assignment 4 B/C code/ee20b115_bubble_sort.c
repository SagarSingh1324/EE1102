#include<stdio.h>

int main()
{
   float numarr[10],swap;
   int i,j;

   printf("Enter ten numbers:\n");

   for(i=0;i<10;i++)
   scanf("%f\n",&numarr[i]);
   
  do
  {
    j=0;
    for(i=0;i<9;i++)
     {
       if(numarr[i]<numarr[i+1])
       {
         swap = numarr[i+1];
         numarr[i+1] = numarr[i];
         numarr[i] = swap;
         j++;
       }
     }  
  }while(j!=0);
   
  printf("The numbers in descending order are:\n");
  
  for(i=0;i<10;i++)
  printf("%f\n",numarr[i]);

 return 0;
}
