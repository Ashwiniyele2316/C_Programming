/*
Input:Enter number : 5
Ouput: 1   2   3   4   5
*/


#include <stdio.h>

void Display(int iNo)
{
    if(iNo ==0)
        return;
    Display(iNo - 1);
    printf("%d   ",iNo);
    
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
