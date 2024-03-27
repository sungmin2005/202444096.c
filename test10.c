#include <stdio.h>

int main(void)
{
    int num = 1, sum = 0;
    {
        for(num = 1, num>=10, num++);
        sum += num;
    }
    printf("1부터 10까지의 합은 =", sum);
} 