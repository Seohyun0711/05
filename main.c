#include <stdio.h>

int main(void)
{
    int num;

    printf("정수 입력: ");
    scanf("%d", &num);

    if (num < 0)
    {
        num = -num;
    }
    
        printf("절대값은 %d 입니다\n", num);
    
    return 0;
}