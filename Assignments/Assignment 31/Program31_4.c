/*input : iRow = 6 iCol = 6
*       *       *       *       *       *
        *
                *
                        *
                                *
*       *       *       *       *       *
*/


#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i, j;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            
            if(i == 1 || i == iRow)
            {
                printf("*\t");
            }
            
            else if(i == j)
            {
                printf("*\t");
            }
            else
            {
                printf("\t");
            }
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
