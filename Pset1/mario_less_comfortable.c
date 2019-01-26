#include <stdio.h>
#include<cs50.h>

int main(void)
{
    int x;
    do  {
         x=get_int("Enter a number between 0 and 23: ");
        }
    while(x<0||x>23);

    for (int i=0; i<x; i++)
    {
        for (int j=x-i-1; j>0; j--)
        {
            printf(" ");
        }
        for (int k=-2; k<i; k++)
        {
            printf("#");
        }
        printf("\n");
    }

}
