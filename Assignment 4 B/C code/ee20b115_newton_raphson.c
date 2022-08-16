#include<stdio.h>
#include<math.h>

int main()
{
  float x1,x2,N,xt;
  int i=0;

  printf("Enter the number:\n");
  scanf("%f",&N);
  x1 = N;

  if(N!=0)
  {
    do
    {
      x2 = (x1-((x1*x1*x1-N)/(3*x1*x1)));
      x1 = x2;
      i++;
    }while((i!=100)&&((fabs(x1*x1*x1-N))>=0.00001));
  }

  printf("Cube root of number is: %f",x1);
  
 return 0;
}