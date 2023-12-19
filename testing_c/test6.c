#include <stdio.h>
size_t countBits(unsigned value)
{
    int i = 0;
    while (value > 0)
    {
        if (value % 2 == 1)
        {
            i++;
        }
        value = value / 2;
    }

    return i;
}

int main()
{
    int x = 1234;
    printf("%ld", countBits(x));

    return 0;
}