#include <stdio.h>

int DollarToINR(int iNo)
{
    int iRate = 70;
    int iAns = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iAns = iNo * iRate;
    return iAns;
}
// Time Complexity O(1)
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD : ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d\n", iRet);

    return 0;
}
