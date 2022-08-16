#include<stdio.h>

int main()
{

int A,n,k,bit;

printf("Enter an integer:\n");
scanf("%d", &A);
printf("Enter the position of the bit to be extracted:\n");
scanf("%d", &n);
k = sizeof(int);
if((n<1)||(n>(8*k))) // 8 bits in 1 byte
{
printf("You have entered an incorrect value of n.\n"); // position check
}
else
{
bit = (A>>(n-1))&1; // as shifting right n-1 time makes nth digit the first
printf("The %d bit of %d from the right is %d:\n",n,A,bit);
}
return 0;
}



