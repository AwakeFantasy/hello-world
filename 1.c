#include<stdio.h>
int main()
{
    int iresult=0;
    int i;
    printf("1加到一百的结果是：");
    for(i=1;i<=100;i++)
    {
        iresult=i+iresult;
    }
    printf("%d\n",iresult);
    return 0;
}