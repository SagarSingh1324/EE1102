#include<stdio.h>

int main()
{
    double r, c, a;
printf("Enter the radius of circle: \n");
scanf("%lf", &r);
c = 2*3.14*r;
a = 3.14*r*r;
printf("Circumference of circle is : %1.lf \n Area of circle is : %1.lf ", c, a);
    return;
}