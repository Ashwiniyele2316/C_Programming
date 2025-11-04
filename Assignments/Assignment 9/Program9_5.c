#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iEven = 1, iOdd = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if(iCnt % 2 == 0)
        {
            iEven = iEven * iCnt;
        }
        else
        {
            iOdd = iOdd * iCnt;
        }
    }
    return iEven - iOdd;
}
//Time Complexity O(N)
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return 0;
}
