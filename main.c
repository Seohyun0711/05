#include <stdio.h>

int main(void)
{
    int num;
    int sum = 0;
    int i;

    printf("input the number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        sum += i;
    }

    printf("The result is %d\n", sum);

    return 0;
}