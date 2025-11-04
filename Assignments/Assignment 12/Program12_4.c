#include <stdio.h>

int sum_of_even_factors(int number)
{
    int sum = 0;
    for(int i = 1; i < number; i++)
    {
        if(i % 2 == 0 && number % i == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}

// Time Complexity: O(n)

int main()
{
    int number;

    printf("Enter number : ");
    scanf("%d", &number);

    printf("%d\n", sum_of_even_factors(number));

    return 0;
}
