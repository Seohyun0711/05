#include <stdio.h>

int main(void)
{
    int num = 0;
    char c;

    printf("input a string: ");
    

    while ((c = getchar()) != '\n')
    {
        if (c >= '0'&& c<= '9')
        {
            num++;
        }
    }
    
        printf("the number of digits is %d \n", num);
    
    return 0;
}