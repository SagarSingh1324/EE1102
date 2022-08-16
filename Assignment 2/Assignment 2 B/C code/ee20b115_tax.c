#include<stdio.h>

int main(){
    float inc,tax;
    printf("Enter the annual income:\n");
scanf("%f",&inc);


if(inc<=250000){
 tax=0;
}
else if(inc<=500000){
tax = (inc-250000)*(0.05);
}
else if(inc<=1000000){
    tax = (250000)*(0.05)+(inc-500000)*(0.2);
}
else{ 
tax = (250000)*(0.05)+(500000)*(0.2)+(inc-1000000)*(0.3);    
}

if((inc>5000000)&&(inc<=10000000)){
tax = tax + tax*(0.10);
}

if(inc>100000000){
    tax = tax + tax*(0.05);
}

tax = tax + tax*(0.04);


printf("Total tax is %f",tax);

return 0;
}