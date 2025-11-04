#include<stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0, iCnt = 0;

    // Time Complexity = O(n)
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) != 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int Value = 0, 
    iRet = 0;

    printf("Enter number: ");
    scanf("%d",&Value);

    iRet = CountOdd(Value);
    printf("%d",iRet);

    return 0;
}
