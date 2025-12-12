//output:1  2  3  4  5

#include<stdio.h>

void Display(int i)
{
    if(i>5)
    {
        return;
    }
    printf("%d  ",i);
    Display(i+1);

}
int main()
{
    Display(1);
    return 0;
}
