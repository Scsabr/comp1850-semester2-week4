
#include <stdio.h>

int main( void ) {

    char charArray[5] = {'h','e','l','l','o'};
    char charString[] = "there";
    int intArray[] = {1,2,3,4,5};
 
    printf("As array: %s\n",charArray);     // strange behaviour?
    printf("Length of array: %ld\n",sizeof(charArray));   // expected result

    printf("As string: %s\n",charString);   // normal behaviour
    printf("Length of string: %ld\n",sizeof(charString));   // includes silent character \O

    // printf("As string: %s\n",intArray);   // normal behaviour
    printf("Length of int array: %ld\n",sizeof(intArray)/sizeof(int));

    return 0;
}
