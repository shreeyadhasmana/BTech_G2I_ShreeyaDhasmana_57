

#include <stdio.h>
#include <math.h>

int main()
{
    int i;
    printf("Armstrong numbers btw 20 to 50 are:\n");

    for(i = 100; i <= 200; i++)
    {
        int sum = 0;
        int a = i;
        int digit = 0;
        int b = i;

        while(a > 0)
        {
            digit++;
            a = a / 10;
        }

        while(b > 0)
        {
            int c = b % 10;
            sum = sum + pow(c, digit);
            b = b / 10;
        }

        if(i == sum)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
