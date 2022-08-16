#include<stdio.h>

int main()
{
 char str1[21], str2[22]; // declaring the 2 strings
 int i;                   
                          
  printf("Enter 1st string (max 20 characters):\n"); // prompting user to enter 1st string
  fgets(str1,22,stdin);    // taking input for 1st string

  for(i=0;i<22;i++)        // removing new line character (if present)
  {                        
    if(str1[i] == '\n')   // finding position of new line character
    str1[i] = '\0';     // removing it from the string
  }
  
   printf("\n");

  printf("Enter 2nd string (max 20 characters):\n"); // prompting user to enter 2nd string
  fgets(str2,22,stdin);    // taking input for 2nd string

   printf("\n");

  printf("Concatenated string is: %s%s",str1,str2); // concatenating and printing the two strings

 return 0;  
}