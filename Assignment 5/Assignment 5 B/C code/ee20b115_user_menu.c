#include<stdio.h>
#include<stdlib.h>

int main()
{
 int inp;     // to store initial input
 int fact=1;  // to store factorial if input is 1
 int i;       // for calculating factorial
 int n;       // storing secondary input
 int sq;      // storing squre if input is 2
 int cub;     // storing cube if input is 3

 do                                                                 // using do-while loop till 0 is entered
 {
  printf ("User Menu:\n");
  printf( "      	  1 : Factorial\n");
  printf( "      	  2 : Square\n");
  printf( "      	  3 : Cube\n"); 
  printf( "      	  0 : Exit\n");

  printf("Enter integer corresponding to operation:\n");           // prompting and scanning for input
  scanf("%d",&inp);
   {
     if(inp==1)                                                    // operation if input is 1
      { 
         printf("Enter a positive integer less tha 10:\n");        // prompting and scanning for secondary input
         scanf("%d",&n); 
         if((n>0)&&(n<10))                                         // checking if secondary input is valid
         {
            for(i=1;i<=n;i++)
             {
                fact = fact*i;                                      // calculating factorial
             }
            printf("Factorial of integer entered is:\n%d",fact);  
         }else
          {
             printf("You have entered an invalid input.\n");       // printing error if input is invalid
             inp = 1;
          }
      }else
     if(inp==2)                                                    // operation if input is 2
      {        
         printf("Enter an integer:\n");                            // prompting and scanning for secondary input
         scanf("%d",&n);  
         sq = n*n;                                                 // calculating and printing square
         printf("Square of integer entered is:\n%d",sq); 
      }else 
     if(inp==3)                                                    // operation if input is 3
      {                       
         printf("Enter an integer:\n");                            // prompting and scanning for secondary input
         scanf("%d",&n);  
         cub = n*n*n;                                              // calculating cube of secondary input
         printf("Square of integer entered is:\n%d",cub);
      }else
     if(inp!=0) 
      {
         printf("You have entered an invalid input. Please enter input again.\n");   // print error if input is invalid
      }   
   }  
  printf("\n");    
 }while(inp!=0);       // condition for looping                        

 if(inp==0)            // condiion if input is 0
  exit(0);
  
  return 0;  
}


