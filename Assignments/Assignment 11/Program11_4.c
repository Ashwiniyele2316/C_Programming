#include<stdio.h>

int RangeSumEven(int iStart , int iEnd)
{
    if(iStart > iEnd || iStart < 0 || iEnd < 0)
    {
        return -1;
    }

    int iSum = 0;
    for(int i = iStart ; i <= iEnd ; i++)
    {
        if(i % 2 == 0)
        {
            iSum += i;
        }
    }
    return iSum;
}
//Time Complexity O(n)
int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point\n");
    scanf("%d",&iValue1);

    printf("Enter ending point\n");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("Invalid range");
    }
    else
    {
        printf("Addition is %d",iRet);
    }

    return 0;
}
