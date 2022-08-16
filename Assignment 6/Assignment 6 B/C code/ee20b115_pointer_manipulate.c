#include<stdio.h>  
  
  int main()
   {
     int myArray[ ] = {1,24,17,4,-5,100};  // defining the array
     int *ptr;                             // defining a integer pointing pointer
     ptr = &myArray[0];                    // passing the address of first element of array to pointer

     int k = sizeof(myArray)/sizeof(int);  // finding the number of elements, dividing by sizeof(int) as all elements are integer
 
     printf("Size of array is: %d\n",k);   // printing size of array

     int i;                                // for looping

     printf("Elements of array are: \n");

     for(i=0;i<6;i++)
      {
         printf("%d\n", *(ptr+i));         // derefrencing and printing ptr+i as i rund from 0 to 5 
      }

     return 0;
   }  