#include<stdio.h>

int main(){
int i,j,days,weeks,months,years;

 printf("Enter first date in dd/mm/yyyy format:\n");
int date1[10];
for(i=0; i<10; i++){
date1[i] = getchar();}

getchar(); // for accepting enter

printf("Enter second date in dd/mm/yyyy format:\n");
int date2[10];
for(j=0; j<10; j++){
date2[j] = getchar();}

days = (date1[0]*10+date1[1])-(date2[0]*10+date2[1]);
  if(days<0){days = days*(-1);}

  weeks = ((date1[0]*10+date1[1])-(date2[0]*10+date2[1]))/7;

months = (date1[3]*10+date1[4])-(date2[3]*10+date2[4]);
  if(months<0){months = months*(-1);}

years = (date1[6]*1000+date1[7]*100+date1[8]*10+date1[9])-(date2[6]*1000+date2[7]*100+date2[8]*10+date2[9]);
  if(years<0){years = years*(-1);}

printf("Difference in \n Days: %d \n Weeks: %d \n months: %d \n Years: %d",days,weeks,months,years);
    return 0;
}
    
