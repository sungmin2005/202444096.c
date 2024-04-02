#include <stdio.h>
int main()
{
    int j;
    printf("원하는 단을 입력하세요.\n");
    scanf("%d",&j);

    for(int i=1,i<=9,i++)
    {
        printf("%d * %d = %d",j,i,j*i);
    }
}