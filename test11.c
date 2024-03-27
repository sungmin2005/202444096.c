#include <stdio.h>

int add(int a, int b);
int minus(int a, int b);
int multi(int a, int b);
int div(int a, int b);
int main()
{
    int a,b;
    int result=0;
    scanf("%d, %d", &a, &b );
    result = add(a,b);
    printf("%d + %d = %d", a,b,result);

    int a,b;
    int result=0;
    scanf("%d, %d", &a, &b );
    result = minus(a,b);
    printf("%d - %d = %d", a,b,result);

    int a,b;
    int result=0;
    scanf("%d, %d", &a, &b );
    result = multi(a,b);
    printf("%d * %d = %d", a,b,result);

    int a,b;
    int result=0;
    scanf("%d, %d", &a, &b );
    result = div(a,b);
    printf("%d % %d = %d", a,b,result);


    return 0;
}  