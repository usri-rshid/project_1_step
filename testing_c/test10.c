#include <stdio.h>

int main()
{
    int s;
    printf("enter size of array : ");
    scanf("%d", &s);
    int tab[s];
    int *T = tab;

    while (T < s + tab)
    {
        printf("enter element on array:");
        scanf("%d", T);
        T++;
    }
    printf("elements in table are : \n");
    for (T = tab; T < tab + s; T++)
    {
        printf("%d\n", *T);
    }
    return 0;

    /*


    */
}