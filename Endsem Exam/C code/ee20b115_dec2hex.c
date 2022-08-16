#include<stdio.h>
#include<stdlib.h>

 int hex_length(int N)  // function to find length of hex representation
 {
    long int remainder;  // relevent variables
    long int quotient;

	int i=1;   
    int j;
    int temp;
    int L=0;

	char hexadecimalNumber[100]; // to store hex representation

	quotient = N;                // initialising quotient

	while(quotient!=0)           // algorithm to convert integer to hexadecimal
    {
		temp = quotient % 16;
		 if( temp < 10)
         {
		     temp =temp + 48;
         }else
         {
		     temp = temp + 55;
         }

		hexadecimalNumber[i++]= temp;
		quotient = quotient / 16;
	}

	for (j = i -1 ;j> 0;j--)     // counting the number of charcaters stored in string
	      L++;
 
 return L;                       // returning the length of the function   
 }


int main()
 {

 int inp;

 printf("Enter an integer: \n");  // prompting and scannign for input integer
 scanf("%d", inp);

 int length = hex_length(inp);   // calling the length function

 printf("%d", length);

 return 0;
}