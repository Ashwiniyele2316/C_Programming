#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0, iMult = 1;

    // Time Complexity = O(n)
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
            iMult = iMult * iDigit;
        }
        iNo = iNo / 10;
    }
    return iMult;
}

int main()
{
    int Value = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d",&Value);

    iRet = MultDigits(Value);
    printf("%d",iRet);

    return 0;
}
