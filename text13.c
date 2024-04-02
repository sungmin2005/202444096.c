#include <stdio.h>
//구구단 제작
int main()
{
    int x;
    printf("원하는 단을 입력하세요.\n");
    scanf("%d", &x);

    for (int i=1; i<= 9; i++)
    {
        printf("%d * %d = %d\n",x,i,x*i );
    }
}