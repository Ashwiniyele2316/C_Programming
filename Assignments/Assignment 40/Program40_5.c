/*
Input:Enter number : 6
Output: a   b   c   d   e   f
*/


#include <stdio.h>

void Display(int iNo)
{
    if(iNo == 0)
        return;

    Display(iNo - 1);
    printf("%c   ", 'a' + (iNo - 1));
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
