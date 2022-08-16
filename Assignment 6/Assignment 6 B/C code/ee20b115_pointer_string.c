#include<stdio.h>

int main()
{
   int i;      // for first loop 
   int j;      // for storing position of character previous to '\0'
   int k;      // for 2n loop
   int l=0;    // to makes sure only first occurence is '\0' is considered

   char str[200];   // defining array with maximum characters 200
   char *str_ptr;   // defining char pointer

   printf("Enter a string of maximum 200 characters:\n");

   fgets(str,201,stdin);      // scanning the string
   
   for(i=0;i<201;i++)
    {
        if(l==0)
         {
           if(str[i]=='\0')    // finding position of '\0'
            {
              j = (i-1);       // storing position of previous character
              l++;
            }
         }
    } 

   str_ptr = &str[0];          // storing address of first element of str in pointer 

   printf("\nString in reverse order is:\n");

   for(k=j;k>=0;k--)
    {
       printf("%c",*(str_ptr+k));  // derefrencing and printing string in reverse order
    }

 return 0;
}