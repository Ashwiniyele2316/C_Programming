#include <stdio.h>

void OddDisplay(int iNo)
{
    int i = 0;

    if(iNo < 0)     
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo; i += 2)
    {
        printf("%d ", i);
    }
}
//Time Complexity O(N)
int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;
}
