/* 
input: iRow = 6  icol = 6
*       *       *       *       *       *
*       #       #       #       #       *
*       $       *       *       *       *
*       $       $       *       *       *
*       $       $       $       *       *
*       *       *       *       *       *
*/

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    for(int i = 1; i <= iRow; i++)
    {
        for(int j = 1; j <= iCol; j++)
        {
          
            if(i == 1 || i == iRow || j == 1 || j == iCol)
            {
                printf("*\t");
            }
            else
            {
               
                if(i == 2)
                {
                    printf("#\t");
                }
                else
                {
                   
                    if(i == j)
                    {
                        printf("*\t");  
                    }
                    else if(j > i)      
                    {
                        printf("*\t");  
                    }
                    else               
                    {
                        printf("$\t");  
                    }
                }
            }
        }
        printf("\n");
    }
}

int main()
{
    Pattern(6, 6);
    return 0;
}
