
/*
 * C accesses command line data through parameters to main: argc, argv
 * Compile and test the code:
 *   ./cmd_line_args abc 123 hello
 */

#include <stdio.h>
#include <stdlib.h>

int main( int argc, char **argv ) {

    int check;
    int valid;

    printf("Number of args: %d\n",argc);

    for( int k=0; k<argc; ++k ) {
        printf("argv[%d]: %s\n",k,argv[k]);
        printf("%d\n", atoi(argv[k]));

    valid = sscanf(argv[k], "%d", &check);
    if(valid)
        printf("found %d\n", check);

    }
    return 0;
}

// What is printed?
// What form is the data?