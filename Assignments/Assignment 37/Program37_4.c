#include <stdio.h>

int LastChar(char *str, char ch)
{
    int i = 0;
    int iLast = -1;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            iLast = i;
        }
        i++;
    }
    return iLast;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character:\n");
    scanf(" %c",&cValue);

    iRet = LastChar(arr, cValue);

    printf("Character location is %d\n", iRet);

    return 0;
}
