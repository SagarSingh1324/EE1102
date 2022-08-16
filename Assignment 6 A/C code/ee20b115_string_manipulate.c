 #include<stdio.h>
#include<stdlib.h>

 int strlen(char *str1)      // function to find the length of the string
 {
    int j=0;

    while (*str1 != '\0')    // looping till the character is encountered
    {
       j++;
       str1++;
    }
  return j;                  // returning the variable representing the length
 }

  char *strcpyn(char *str1, int n1)  // function to copy the first n characters of string 
  {
    char *cpy = malloc(n1*sizeof(int));
    int n = strlen(str1);
    int k;

    if(n1<=n)                       // checking for error
    {  
      for(k=0;k<n1;k++)
      {     
         *(cpy+k) = *(str1+k);      // copying the value from previous to new pointer
      }
      return cpy;
    }else
    {
       return NULL;                  //  returning NULL pointer
    }
  } 

 int strcmpn(char *str1, char *str2, int n2)  // function to compare two strings
 {
  
    int x,m=0;

    for(x=0;x<n2;x++) 
    { 
       if(*(str1+x)==*(str2+x))              // comparing the values and increasing match by 1 if true
       {
          m++;
       }
    }

   if(m==n2)
    {
      return 1;                       // returning 1 if n is equal to match value
    }else     
    {
      return 0;                       // returning 0 otherwise
    }
 }

 int main()           
 {                       // declaring relevant variables
    char str1[50];       // for storing 1st string
    char str2[50];       // for storing 2nd string
    char *cpy2;          // for storing copied string
    int  length;         // for storing length
    int n1;              // for storing the number of characters to be copied
    int n2;              // for storing the number of character to be compared
    int match;           // for storing if its a match
    int i;               // fro looping
   
     printf("Enter a string:\n");   // taking string input
     fgets(str1, 51, stdin);

     for(i=0;i<51;i++)         // removing new line character
      {                        
         if(str1[i] == '\n')    
         {   
          str1[i] = '\0'; 
         }          
      }

     printf("Enter another string to compare characters with: \n"); // taking string input
     fgets(str2, 51, stdin); 

     for(i=0;i<51;i++)        // removing new line character
      {                        
         if(str2[i] == '\n')       
         str2[i] = '\0';           
      }

     length = strlen(str1);   // calling the length function

     printf("The length of 1st string is: %d\n",length);

     printf("Enter the number of characters to be copied from the 1st string: \n");
     scanf("%d",&n1);

     cpy2 = strcpyn(str1,n1);  // calling the string copy function
     if(cpy2!=NULL)
     {
       printf("%s\n",cpy2);
     }else
     {
        printf("Invalid input was entered.\n");
     }

     printf("Enter the number of charcaters to be compared between strings  (1:MATCH, 0:NO_MATCH): \n");  // prompting for and taking input 
     scanf("%d",&n2);
      
     match = strcmpn(str1,str2,n2);  // calling the string comparison function
     printf("%d",match);             // printing if its a match or not

   return 0; // returning 0 to main function
 }