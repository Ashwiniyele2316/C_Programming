#include <stdio.h>
#include <stdlib.h>

void DisplayMultiplesOf11(int Arr[], int iLength)
{
    int i;
    printf("Elements multiple of 11: ");
    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] % 11 == 0)
            printf("%d ", Arr[i]);
    }
    printf("\n");
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *) malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
        scanf("%d", &p[iCnt]);

    DisplayMultiplesOf11(p, iSize);

    free(p);
    return 0;
}
