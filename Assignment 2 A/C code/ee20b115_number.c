#include<stdio.h>

int main()
{

int i, j = 0,k ;
    printf("Enter an integer: ");
    scanf("%d", &i);
    while (i != 0) {
        k = (i % 10);
        j = (j * 10) + k;
        i /= 10;
    }
    printf("The reversed number = %d", j);
    return 0;
}