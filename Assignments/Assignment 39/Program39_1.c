//output: *   *   *   *   *

#include<stdio.h>

void Display(int i)
{
    if(i>5)
    {
        return;
    }
    printf("*   ");
    Display(i+1);

}
int main()
{
    Display(i);
    return 0;
}
