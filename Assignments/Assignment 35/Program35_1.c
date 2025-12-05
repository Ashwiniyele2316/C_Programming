#include <stdio.h>

void DisplayASCII()
{
    int i = 0;

    printf("Symbol\tDecimal\tHex\tOctal\n");
    printf("------------------------\n");

    for(i = 0; i <= 255; i++)
    {
        char ch = (i >= 32 && i <= 126) ? i : ' ';

        printf("%c\t%d\t%X\t%o\n", ch, i, i, i);
    }
}

int main()
{
    DisplayASCII();
    return 0;
}
