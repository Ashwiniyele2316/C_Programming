 #include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if(iCnt % 2 != 0)
        {
            iMult = iMult * iCnt;
        }
    }
    return iMult;
}
// Time Complexity O(N)
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd factorial of number is %d",iRet);

    return 0;
}


