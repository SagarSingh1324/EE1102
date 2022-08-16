#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
double X, Y, Z;
printf("enter speed in km/hr:\n");
scanf("%lf", &X);
printf("enter time in hrs:\n");
scanf("%lf", &Y);
Z = X*Y;
printf("distance travelled in kms is : %.1lf", Z);
return 0;
}