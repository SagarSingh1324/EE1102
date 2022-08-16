#include<stdio.h>
#include<string.h>

int main()
{
  char str[25];  // to store entered string
  int i;         // to use in loop
  int len;       // to store length of string

  printf("Enter the string that has to be encrypted: \n");  // prompting and 
                                                            
  fgets(str,26,stdin);                                      // scanning for string 

  len = (strlen(str)-1);                                    // finding length of entered string

  for(i=0;i<=len;i++)
   {                                                        // doing the given operations on the string using 
      if((str[i]>='a')&&(str[i]<='z'))                      // values of each character in string
       {
         str[i] = str[i]-32;
       }else
      if((str[i]>='A')&&(str[i]<='Z'))
       {
         str[i] = str[i]+32; 
       }else
      if((str[i]>='0')&&(str[i]<='9')) 
       {
         str[i] = 48+(57-str[i]);
       }else
      if(str[i]=='+')
       {
         str[i] = '/';
       }else
      if(str[i]=='-')
       {
         str[i] = '*';
       }else
      if(str[i]=='*')
      {
         str[i] = '-'; 
      }else        
      if(str[i]=='/')
       {
         str[i] = '+';                                                      
       }else
      if(str[i]==32)
       {
         str[i] = 36;    
       }else
      if(str[i]==36)
       {
         str[i] = 32; 
       }  
   }

  char revstr[len];                                 // defining revrsed string

  for(i=0;i<len;i++)                             
   {
     revstr[i] = str[len-(i+1)];                    // reversing the string
   }

  printf("Encrypted string is: \n%s",revstr);       // printing encrypted string

 return 0;
}