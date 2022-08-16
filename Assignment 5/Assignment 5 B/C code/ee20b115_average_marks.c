#include<stdio.h>
#include<stdlib.h>

int main()
{
  float ave;   // to store average marks
  float *list; // pointer to list of marks array location
  float mark;  // to store each mark entered temporarily
  float sum=0; // to store sum of marks entered  
  int stud;    // to store number of stud
  int i;       // to use in loop
  
  printf("Enter the no. of students: \n");
  scanf("%d",&stud);                                  // prompting and scanning for no. of students

  list = (float*)malloc(stud*sizeof(float));          // allocating size for marks array
  
  printf("Enter the marks: \n");                      // prompting to enter marks
  for(i=0;i<stud;i++)
   {
     scanf("%f",&mark);                               // scanning ith mark
     list[i] = mark;                                  // assigning ith mark
     mark = 0;                                        
   }

  for(i=0;i<stud;i++)
   {
      sum =  (sum + list[i]);                         // calculating sum of marks
   }
   
  ave = (sum/stud);

  printf("The average of marks of the class are: %f",ave);

  free(list);                                        // freeing up the space
  list = NULL;                                       // initializing 1st pointer to null

  return 0;
}