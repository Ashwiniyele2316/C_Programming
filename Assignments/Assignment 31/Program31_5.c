
/*
input: iRow = 5 iCol = 5

1       2       3       4
        2       3       4
                3       4
                        4

*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    for(int i = 1; i <= iRow; i++)
    {
        for(int j = 1; j <= iCol; j++)
        {
            if(j >= i)
                printf("%d\t", j);
            else
                printf(" \t");
        }
        printf("\n");
    }
}

int main()
{
    int iValue1, iValue2;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
