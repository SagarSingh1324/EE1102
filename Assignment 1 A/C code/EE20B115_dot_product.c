#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
double X1, Y1, Z1, X2, Y2, Z2, R;
printf("enter X1:\n");
scanf("%lf", &X1);
printf("enter Y1:\n");
scanf("%lf", &Y1);
printf("enter Z1:\n");
scanf("%lf", &Z1);
printf("enter X2:\n");
scanf("%lf", &X2);
printf("enter Y2:\n");
scanf("%lf", &Y2);
printf("enter Z2:\n");
scanf("%lf", &Z2);
R = X1*X2 + Y1*Y2 + Z1*Z2;
printf("Dot product of the vectors is: %.1lf", R);
return 0;
}