#include<stdio.h>

int KMtoMeter(int iKm)
{
    int iMeter = 0;
    iMeter = iKm * 1000;
    return iMeter;
}
// Time Complexity O(1)
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance in Km: ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meters is : %d", iRet);

    return 0;
}
