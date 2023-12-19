#include <stdio.h>

/*recurion
int fib(int a);

int main() // int argc, char *argv[])
{

    int number;

    printf("enter number for fibbonicci :\n");
    scanf("%d", &number);
    printf("the final result is %lld\n", fib(number));

    return 0;
}

int fib(int a)
{
    if (a > 1)
    {
        return fib(a - 1) + fib(a - 2);
    }
    else if (a == 1)
        return 1;
    else if (a == 0)
        return 0;
    else
    {
        printf("error number should be greater 0 and number interger\n");
        return -1;
    }
}

*/
int main()
{
    int a = 0, b = 1, number;
    long long int result = 0;

    printf("enter number for fibbonicci :\n");
    scanf("%d", &number);
    if (number == 0)
    {
        result = a;
    }
    else if (number == 1)
    {
        result = b;
    }
    for (int i = 2; i <= number; i++)
    {
        result = a + b;
        a = b;
        b = result;
    }
    printf("result of fibbonacci of %d is %lld\n", number, result);

    return 0;
}