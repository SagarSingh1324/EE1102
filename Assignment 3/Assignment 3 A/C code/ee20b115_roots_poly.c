#include<stdio.h>
#include<math.h>

int main()
{
    float A,B,C,R1,R2,R3,R4,R5,R6;

    printf("Enter the three coefficients of quadratic equation starting from coefficient of X(sqaured):\n");

    scanf("%f",&A);
    scanf("%f",&B);
    scanf("%f",&C);
   
   float D = ((B*B) - (4*A*C));

   if(D<0.0)
   {
       R1 = (sqrt(-D))/(2*A);
       R2 = (sqrt(-D))/(2*A);
       R3 = -B/(2*A);
       printf("The roots are %f+i%f and %f-i%f.",R3,R1,R3,R2);  
   }
   else if(D>0.0)
   {
       R5 = (-B+sqrt(D))/(2*A);
       R6 = (-B-sqrt(D))/(2*A);
       printf("The roots are %f and %f.",R5,R6);
   }
    else 
   {
       R4 = (-B)/(2*A);
       printf("The repeated root is %f.",R4);
   }

    return 0;
} 