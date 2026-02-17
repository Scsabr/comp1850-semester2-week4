
/*
 * Dot product of 2 vectors
 */

 #include <stdio.h>

 int main( void ) {
    float a[]={ 1.0,1.0,1.0,1.0,1.0 }; // 5
    float b[]={ 2.0,3.0,4.0,5.0,6.0 };
    float d;


    for (int i=0; i < 5; i++)
    {
      d += a[i] * b[i];
    }

    printf("Dot product: %.2f\n", d);
    return 0;
 }