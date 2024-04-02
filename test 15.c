#include <stdio.h>
//증감연산자 전위형 후위형
int main (void)
{
    int val, a;

    a = 8;
    val = ++a;

    printf("a = 8일 떄\n");
    printf("1.val = ++a이면 val = %d, a = %d\n", val, a);

    a = 8;
    val = a++;

    printf("2.val = a++이면 val = %d, a = %d\n", val, a);

    a = 8;
    val = --a;

    printf("3.val = --a이면 val = %d, a = %d\n", val, a);

    a = 8;
    val = a--;

    printf("2.val = a--이면 val = %d, a = %d\n", val, a);
}