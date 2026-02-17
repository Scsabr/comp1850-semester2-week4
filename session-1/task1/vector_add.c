
/*
 * Sum of 2 vectors
 */

 #include <stdio.h>

 int main( void ) {
    float a[]={ 1.0,1.0,1.0,1.0,1.0 };
    float b[]={ 2.0,3.0,4.0,5.0,6.0 };
    float c[5];

   
    for (int i=0; i<5; i++)
    {
      c[i] = a[i]+b[i];
    }

   printf("a + b = ( ");
    for (int i=0; i<5; i++)
    {
      printf("%.2f%c ",c[i],(i==4)?')':',');
    }
    printf("\n");

    return 0;
 }
