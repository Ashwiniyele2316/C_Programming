 #include <stdio.h>

int Factorial(int iNo)
{
    int i = 0, iFact = 1;

    if(iNo < 0)     
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo; i++)
    {
        iFact = iFact * i;
    }

    return iFact;
}
// time Complexicity O(N)
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d\n", iRet);

    return 0;
}
 
