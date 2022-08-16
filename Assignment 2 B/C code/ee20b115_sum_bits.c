#include<stdio.h>

int main(){

    int n,k=0,i,z;

printf("Enter an integer:\n");
scanf("%d",&n);

z = sizeof(int);
if(n<0){
n = n*(-1);
}
for(i=0; i<(8*z); i++)
{
k = k + ((n>>i)&1);
}

printf("The no. of 1's in binary representation of %d is: %d",n,k);
return 0;
}