
/*
 * Some small tests of the string library
 */

#include <stdio.h>
#include <string.h>

int main( void ) {
    char str1[100] = "hello";
    char str2[100] = "goodbye";
    char str3[100];

    // use printf to verify the following tests

    // use 'strcmp' to compare 2 strings - print the return value
    
    //int check = str1 == str2;
    int check = strcmp(str1, str2);
    if (check)
    {
        printf("The strings are not equal.\n");
    }
    else
    {
        printf("The strings are equal.\n");
    }

    // use 'strcat' to concatenate 2 strings - print the resulting string
    printf("%s\n", strcat(str1, str2));

    // use 'strcpy' to copy a string into str3 - print string 3

    strcpy(str3, strcat(str2, str1));
    printf("%s\n", str3);
    printf("%s\n%s\n%s\n", str1, str2, str3);

    return 0;
}
