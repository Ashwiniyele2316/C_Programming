/*
input : iRow = 4 iCol = 4

output:
*       *       *       *
*       *       *
*       *
*

*/

#include <stdio.h>

void Pattern(int iRow)
{
    for(int i = iRow; i >= 1; i--)        
    {
        for(int j = 1; j <= i; j++)       
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of rows : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}
