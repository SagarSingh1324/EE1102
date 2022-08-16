#include<stdio.h>
#include<math.h>
int main()
{
    int p;
	float  r,t, m;
	printf("Enter the required details:\n");
	printf("Principal (Rs): ");
	scanf("%d",&p);
	printf("Rate of interest (%%): ");
	scanf("%f", &r);
	printf("Number of days: ");
	scanf("%f", &t);
	m = p *( r / 100) * (t / 365) +p;
	printf("Maturity amount is Rs. %f\n", m);
	return 0;
}