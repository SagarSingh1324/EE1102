#include<stdio.h>
#include<math.h>

int main()
{
float s,m,h;
printf("Enter time in seconds : \n");
scanf("%f",&s);
m = (s/60);
h = (s/3600);
printf("Entered time in minutes is : %.3f \n Entered time in hours is : %.3f", m,h);
    return;
}