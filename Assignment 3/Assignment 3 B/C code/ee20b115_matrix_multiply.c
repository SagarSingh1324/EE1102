#include<stdio.h>
int main()
{
  int ar,ac,br,bc,i,j,k;

 printf("Enter no. of rows of A matrix:\n");
 scanf("%d",&ar);
 printf("Enter no. of columns of A matrix:\n");
 scanf("%d",&ac);

 int A[ar*ac];
  printf("Enter the elements of A (press enter after 1st element to enter next element):\n");
  for(i=0;i<(ar*ac);i++)
  {   
      scanf("%d",&A[i]);    
  }

 printf("Enter no. of rows of B matrix:\n");
 scanf("%d",&br);
 printf("Enter no. of columns of B matrix:\n");
 scanf("%d",&bc); 

 int B[br*bc];
  printf("Enter the elements of B (press enter after 1st element to enter next element):\n");
  for(i=0;i<(br*bc);i++)
  {   
      scanf("%d",&B[i]);    
  }

  int C[ar*bc];
  for(i=0;i<ar;i++)
  {
      for(j=0;j<bc;j++)
      {
         C[i*ar+j]=0;
         for(k=0;k<br;k++)
         {
           C[i*ar+j] = C[i*ar+j] + A[i*ar+k]*B[k*bc+j];
         }
      }
  }

 printf("A (%d*%d) matrix is:\n",ar,ac);
 for(i=0;i<ar;i++)
  {   
      for(j=0;j<ac;j++)
      {
        printf("%d ",A[i*ar+j]);    
      }
      printf("\n");
  }

 printf("B (%d*%d) matrix is:\n",br,bc);
 for(i=0;i<br;i++)
  {   
      for(j=0;j<bc;j++)
      {
        printf("%d ",B[i*bc+j]);    
      }
      printf("\n");
  }

 printf("C (%d*%d) = A (%d*%d) * B (%d*%d) matrix is:\n",ar,bc,ar,ac,br,bc);
 for(i=0;i<ar;i++)
  {   
      for(j=0;j<bc;j++)
      {
        printf("%d ",C[i*ar+j]);    
      }
      printf("\n");
  }
 return 0;
}  








