#include <stdio.h>
#include <string.h> 

int main()
{
 char str[12]; 
 float num=0,frac_16_power=1,val;
 int valid=1, index=0,len=0, n_frac=0, decimal_point=0, negate=0, sign_present=0; 

 printf("Enter a string with a number (max 10 characters): ");

 fgets(str,11,stdin); 
 len = strlen(str);

 if (str[len-1]=='\n')
 {
  str[len-1]='\0'; 
  len--; 
 }

 while((valid)&&(index<len))
 {
   switch(str[index])
   {
    case '0': val = 0; break;
    case '1': val = 1; break;
    case '2': val = 2; break;
    case '3': val = 3; break;
    case '4': val = 4; break;
    case '5': val = 5; break;
    case '6': val = 6; break;
    case '7': val = 7; break;
    case '8': val = 8; break;
    case '9': val = 9; break;
    case 'A': val = 10; break;
    case 'B': val = 11; break;
    case 'C': val = 12; break;
    case 'D': val = 13; break;
    case 'E': val = 14; break;
    case 'F': val = 15; break;

    case '.': 
    {
     val = -1;

      if(!decimal_point) 
      {
        decimal_point++;
      }else
       valid = 0;
 
      break;
    }   
 

    case '+':
    {
     val = -1;

      if(sign_present||index)
       valid = 0;
      else
      {
        negate = 0;
        sign_present++;
      }
     break;
    }
 
    case '-': 
    {
      val = -1;

      if(sign_present||index)
       valid=0;
      else
      {
       negate = 1; 
       sign_present++;
      }
     break;
    }

    default: 
    {
     val = -1;
     valid = 0;
    }
   }   

    if ((valid)&&(val>=0))
    {
      if(!decimal_point) 
       num = num*16 + val;
      else 
      {
         n_frac++;
         frac_16_power = frac_16_power*(16);
         num = num + (val/frac_16_power);
      }
    }
   index++;
 }

 if (valid)
 {
   if (negate&&(num>0))
   {
     num = (-1)*num;
   }  
     printf("Decimal representation of Hex number in the string is %.*f\n",n_frac,num);     
 } 
   else 
     printf("Entered string is not a valid Hexa-decimal number.\n");


 float dec_rep = num, bin, frac_part = 0.0, frac, fra_factor=0.1;
 int intl, int_part=0,int_factor=1, rem, temp, i;

  intl = dec_rep;
  frac =  dec_rep-intl;

   while(intl!=0)
   {
      rem = intl%2;
      int_part = int_part + rem*int_factor; 
      intl = intl/2;
      int_factor = int_factor*10;
   }
   for(i=1;i<=7;i++)
   {   
      frac = frac*(2);
      temp =  frac;
        
      frac_part = frac_part + fra_factor*temp;
      if(temp ==1)
      frac = frac-temp;

      fra_factor = fra_factor/10;
   }
   bin =  int_part +  frac_part;

   if(valid)
   printf("Binary representation of Hex number in the string is %.*f",n_frac,bin);  

 return 0;
}