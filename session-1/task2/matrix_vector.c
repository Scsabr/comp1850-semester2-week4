
/*
 * Matrix-vector product
 */

 #include <stdio.h>

 int main( void ) {
    float a[4][4];
    float b[4];
    float c[4];

    for (int i=0;i<4;i++)
    {
      b[i] = 1;
      for (int j=0;j<4;j++)
      {
         a[i][j] = 1;
         c[i] += a[i][j]*b[i];
      }
     
   }

   printf("Vector-matrix product = ( ");
   for (int i=0;i<4;i++)
   {
      printf("%.1f%c ",c[i],(i==3)?')':',');
   }
   printf("\n");

    /*
    Intialise the matrix a and vector b entries to 1. 
    Write code to compute the product.
    Store your answer in vector c
    Print your final answer
    */
    return 0;
 }
