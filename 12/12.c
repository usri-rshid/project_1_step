#include <stdio.h>

void echange(int *x, int *y)
{
    if (*x * *y > 0)
    {
        int tmp = *x;
        *x = *y;
        *y = tmp;
    }

    else
    {
        int sum = *x + *y;
        int produit = *x * *y;
        *x = sum;
        *y = produit;
    }
}

int main()
{
    int a, b;
    int *pA;
    int *pB;
    pA = &a;
    pB = &b;

    printf("enter first number :\n");
    scanf("%d", pA);
    printf("enter second number :\n");
    scanf("%d", pB);
    printf("%d and %d before swap \n", a, b);
    echange(&a, &b);
    printf("%d and %d after swap \n", a, b);
    return 0;
}
