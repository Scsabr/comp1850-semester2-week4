
#include <stdio.h>

int main(void)
{

    // define suitable data

    char buffer[100];
    int num1, num2, check, result;
    char op;

    // use scanf to read from the terminal
    printf("Enter sum: ");
    char *check2 = fgets(buffer, 100, stdin);
    if (check2)
    {
        check = sscanf(buffer, "%d%c%d=", &num1,&op, &num2);
        //printf("check: %d\n", check);
        if (!(check - 3))
        {
            if(op=='+')
                result = num1+num2;
            if(op=='-')
                result = num1-num2;
            if(op=='*')
                result = num1-num2;
            if(op=='/')
            {
                if(num2!=0)
                {
                    result = num1/num2;
                }
                else{
                    printf("Calculator error\n");
                    return -1;
                }
            }
            printf("%d %c %d = %d\n", num1, op, num2, result);
        }
        else
        {
            printf("Invalid input.\n");
            return -1;
        }
    }
    else
    {
        printf("Invalid input.\n");
        return -1;
    }

    return 0;
}