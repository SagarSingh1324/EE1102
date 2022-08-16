#include<stdio.h>


void swap(int *x, int *y)  // function to swap the value stored in addresses
 {
    int temp = *x;          // storing value of x in a temporary variable
    *x = *y;                // storing value of x into y
    *y = temp;              // storing value of temp into y 
 }
  

int main()
 {
    int var1 = 5;
    int var2 = 10;

    swap(&var1, &var2);     // calling the swap function

    printf("Value after Swapping: x = %d, y = %d", var1, var2);  // printing the swapped values

    return 0;
 }