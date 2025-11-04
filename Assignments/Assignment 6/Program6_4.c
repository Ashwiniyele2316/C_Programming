#include<stdio.h>

int Multiply(int No1, int No2, int No3)
{

    if(No1 == 0 && No2 == 0 && No3 == 0)
    {
        return 0;
    }

    if(No1 == 0)
    {
        No1 = 1;
    }
    if(No2 == 0)
    {
        No2 = 1;
    }
    if(No3 == 0)
    {
        No3 = 1;
    }

    return No1 * No2 * No3;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Please enter three numbers\n");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("%d", iRet);

    return 0;
}
