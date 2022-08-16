#include<stdio.h>

int is_vowel(char a)                      // function to check for vowels
{
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'|a=='U')   // condition that its a vowel
     {
         return 1;                        // returning 1 if vowel
     }else
     {
          return 0;                       //  returning 0 if consonant
     }
}

int is_consonant(char a)                  // function to check for consonants
{
    int x,y;

    if(is_vowel(a)==1)                    // checking if character is not a vowel
     {
         x = 0;
     }else
     {
         x = 1;
     }

    if((a>=65&&a<=90)||(a>=97&&a<=122))   // checking if its a alphabet
     {
         y = 1;
     }
     else
     {
         y = 0;
     }
    
   return x*y;                 // returning 1 if both conditions true otherwise false
}

int *char_count(char *a)       // function to count vowels, consonants and special characters
{
  int i,u;                     // for looping
  int j=0,k=0,l=0;             // to store no. of vowels, consonants and special characters respectively
  int t=0;                     // to amke sure only first '\0' is considered
  int v;                       // for storing position of first '\0'

  int *p;

  for(u=0;u<51;u++)
   {
       if(t==0)                        // only if first '\0' is not yet encountered
        {
           if(*(a+u)=='\0')
            { 
              t++; 
              v = u;                   // storing position of '\0'
            }
       }
   }
  
    for(i=0;i<v;i++)
    {
       if(is_vowel(*(a+i))==1)
       {
           j++;                        // increasing if vowel is encountered
       }else
        if(is_consonant(*(a+i))==1)
       {
           k++;                        // increasing if consonant is encountered
       }else
       {
           l++;                        // increasing if non alphabet (special character) is encountered
       }
    }
         
  *p = j;                              // storing values of no. of vowels in address of p
  *(p+1) = k;                          // storing values of no. of consonants in address of p+1
  *(p+2) = l;                          // storing values of no. of special characters in address of p+2

  return p;                            // returning pointer
}

int main()
{
    char str[100];                                           // to store string
    char *str_ptr;                                           // pointer pointing to first element of string
    str_ptr = &str[0];

    printf("Enter a string of maximun 100 characters:\n");   // prompting and scanning for string
    fgets(str,101,stdin);
 
    int *arr = char_count(str_ptr);                          // storing return pointer in new arr pointer

    printf("%d %d %d", *arr, *(arr+1), *(arr+2));            // printing values stored in return pointer

    return 0;
}
