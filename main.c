#include <stdio.h>

int main(void)
{
    int answer = 59;
    int guess;
    int count = 0;

    do
    {
        printf("Guess a number: ");
        scanf("%d", &guess);

        count++;

        if (guess > answer)
        {
            printf("High \n");
        }
        else if (guess < answer)
        {
            printf("Low \n");
        }

    } while (guess != answer);

    printf("Congratulations! trials:%d\n", count);

    return 0;
}