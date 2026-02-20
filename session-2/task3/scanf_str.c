
#include <stdio.h>

int main( void ) {
    char buffer[100];
    int num1, num2;
    char school;

    printf("Enter the code number: ");
    fgets(buffer, 100, stdin);
    printf("%s", buffer);
    int count = sscanf(buffer, "%d%c%d ", &num1, &school, &num2);
    if(!count-3)
    {
        printf("Student intake year: %d\nStudent school: %c\nStudent ID: %d\n", num1, school, num2);
    }
    else
    {
        printf("Error: Bad format\n");
    }
    return 0;
}
