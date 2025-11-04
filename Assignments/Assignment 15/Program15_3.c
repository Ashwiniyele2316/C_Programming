

#include<stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0, iCnt = 0;

    // Time Complexity = O(n)
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit > 3 && iDigit < 7)
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

    iRet = CountRange(Value);
    printf("%d",iRet);

    return 0;
}
