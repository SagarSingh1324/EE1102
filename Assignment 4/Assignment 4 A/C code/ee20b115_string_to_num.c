#include<stdio.h>

int main()
{
   char str_arr[50];  // for storing entered string

   int str_len;       // for storing length of entered string

   int str2_arr[50];  // for storing extracted digits

   int i;             // for looping

   int j=0;           // for finding no.of digits

   int num_len;       // for storing number of digits or length of number

   int num=0;         // for storing number made by string

   int first=0;       // for making sure only first occurence of '\0' is considered while finding string length

   printf("Enter a string (of max 50 characters):\n");   // prompting for and taking input of string
   fgets(str_arr,51,stdin);

    for(i=0;i<=51;i++)           // for finding length of the string
    {
       if(first==0)
        {
          if(str_arr[i]=='\0')
           {
              str_len = i-1;
              first = 1;        // for making sure only first occurence of '\0' is considered while finding string length
           }
        }
    }

   for(i=0;i<str_len;i++)
   {
     switch (str_arr[i])       // finding the ith character fro the string
      {
          case '0':            // checking if ith character is a '0' 
          {
              str2_arr[j]=0;   // if yes, then storing integer 0 in 2nd array
              j++;
              break;
          }

          case '1':            // repeating the above procedure for all numbers
          {
              str2_arr[j]=1;
              j++;
              break;
          }

          case '2':
          {
              str2_arr[j]=2;
              j++;
              break;
          }

          case '3':
          {
              str2_arr[j]=3;
              j++;
              break;
          }

          case '4':
          {
              str2_arr[j]=4;
              j++;
              break;
          }

          case '5':
          {
              str2_arr[j]=5;
              j++;
              break;
          }

          case '6':
          {
              str2_arr[j]=6;
              j++;
              break;
          }

          case '7':
          {
              str2_arr[j]=7;
              j++;
              break;
          }

          case '8':
          {
              str2_arr[j]=8;
              j++;
              break;
          }

           case '9':
          {   
             str2_arr[j]=9;
             j++;
             break;
          }

          default:            // breaking if no number is encountered
          {
              break;
          }
      }
   }  

   num_len = j;               // storing number of digits in num_len

    if(num_len==0)                                                // checking if no number is entered
      {
          printf("This string does not contain any number.");
      }else
      {
         printf("Digits in the string: ");                      

         for(i=0;i<num_len-1;i++)                                 // printing the digits extracted from the string
          {
             printf("%d,", str2_arr[i]);
          }
          printf("%d\n",str2_arr[num_len-1]);                    // printed seperately to not put comma after last digit


         for(i=0;i<=num_len-1;i++)                  
          { 
             num = (num*10) + str2_arr[i];                       // calculating the number made from the digits
          }  

         printf("Number from digits in the string: %d", num); 
      }

  return 0;
}