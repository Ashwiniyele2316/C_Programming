/*
Input:Enter number : 5
Ouput: 5   4   3   2   1
*/


#include <stdio.h>

void Display(int iNo)
{
    if(iNo ==0)
        return;
    printf("%d   ",iNo);
    Display(iNo - 1);
    
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
