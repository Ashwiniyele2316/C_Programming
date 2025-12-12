//Output: 5  4  3  2  1


#include<stdio.h>

void Display(int i)
{
    if(i==0)
    {
        return;
    }
    printf("%d  ",i);
    Display(i-1);

}
int main()
{
    Display(5);
    return 0;
}
