#include<stdio.h>

int main()
{
 float V1[3],V2[3],cross[3]; // declaring 1st, 2nd and resultant vector

 printf("Enter the components of 1st vector (press enter after each component):\n"); //prompting used for 1st vector input
 scanf("%f",&V1[0]); // scanning components of 1st vector
 scanf("%f",&V1[1]);
 scanf("%f",&V1[2]);

 printf("Enter the components of 2nd vector (press enter after each component):\n"); //prompting user for 2nd vector input
 scanf("%f",&V2[0]); // scanning components of 2nd vector
 scanf("%f",&V2[1]);
 scanf("%f",&V2[2]);

 printf("\n"); // formatting

 cross[0] = (V1[1]*V2[2]-V1[2]*V2[1]); // computing the cross product
 cross[1] = (V1[2]*V2[0]-V1[0]*V2[2]);
 cross[2] = (V1[0]*V2[1]-V1[1]*V2[0]);

 printf("1st vector entered is:\n");
 printf("<%f,%f,%f>\n\n",V1[0],V2[1],V1[2]); // printing 1st vector

 printf("2nd vector entered is:\n");
 printf("<%f,%f,%f>\n\n",V2[0],V2[1],V2[2]); // printing 2nd vector

 printf("Cross product of the two entered vectors is:\n"); // printing the cross product of vector
 printf("<%f,%f,%f>",cross[0],cross[1],cross[2]);

 return 0;
}