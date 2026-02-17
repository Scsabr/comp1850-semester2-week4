
/*
 * Factorial
 */

 #include <stdio.h>

 int main( void ) {
    int f[20];

    for (int i=1;i<21;i++)
    {
      f[i-1] = i;
    };

    for (int i=1;i<20;i++)
    {
      f[i] *= f[i-1];
    };

    for (int i=0;i<20;i++)
    {
      printf("%d! = %d\n", i+1, f[i]);
    };


    return 0;
 }

