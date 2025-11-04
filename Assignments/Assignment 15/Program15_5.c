
#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0, iEvenSum = 0, iOddSum = 0;

    // Time Complexity = O(n)
    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) == 0)
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else
        {
            iOddSum = iOddSum + iDigit;
        }

        iNo = iNo / 10;
    }
    return iEvenSum - iOddSum;
}

int main()
{
    int Value = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d",&Value);

    iRet = CountDiff(Value);
    printf("%d",iRet);

    return 0;
}
