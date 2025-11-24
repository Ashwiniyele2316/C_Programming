#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    for (int i = 1; i <= iRow; i++)
    {
        for (int j = 1; j <= iCol; j++)
        {
            if (i == 1 || i == iRow)        
            {
                printf("%d\t", j);
            }
            else if (j == 1 || j == iCol)   
            {
                printf("%d\t", j);
            }
            else                             
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: ");
    if (scanf("%d %d", &iValue1, &iValue2) != 2)
    {
        printf("Invalid input\n");
        return 1;
    }

    if (iValue1 <= 0 || iValue2 <= 0)
    {
        printf("Rows and columns must be positive.\n");
        return 1;
    }

    Pattern(iValue1, iValue2);
    return 0;
}
