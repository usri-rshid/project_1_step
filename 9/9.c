#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}

int diff(int a, int b)
{
    return a - b;
}

int product(int a, int b)
{
    return a * b;
}

int quotient(int a, int b)
{
    return a / b;
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("only need to enter 2 numbers \n");
        return 1;
    }
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);

    printf("Sum :%d\n", sum(x, y));
    printf("difference :%d\n", diff(x, y));
    printf("product :%d\n", product(x, y));
    if (y != 0)
    {
        printf("quotient: %d\n", quotient(x, y));
    }
    else
    {
        printf("Cannot divide by zero.\n");
    }

    return 0;
}