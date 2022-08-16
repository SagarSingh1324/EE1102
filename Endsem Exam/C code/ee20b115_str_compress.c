#include<stdio.h>
#include<stdlib.h>

int main()
{

 char str[100];   // storing the input string
 char str2[100];  // storing the output string

 printf("Enter the string to be compressed:\n");

 fgets(str,100,stdin); // storing the given string

 char temp; // to store a charcater of string temporarily
 int i;     // for looping
 int j=1;   // to store the number of occurence of a character
 int k=0;   // to index the output string

 for(i=0;i<100;i++)
 {

   temp = str[i];

   if(temp == str[i+1])
    {
     j++;   // if next character is same , the increase j by 1
    }
    else
    {
        str2[k] = temp;
        str2[k+1] = j + '0';  // converting int to  char
        j=1;                  // re initialising j
        k = k+2; 
    }

 }

 printf("The compressed string is:\n %s", str2); // printing the compressed string

 return 0;
}