#include <stdio.h>

int main()

{
  int n;
  int *N = &n;

  int j = 0;
  do
  {
    printf("enter positive interger : ");
    scanf("%d", N);
  } while (*N <= 0);
  int table[n];
  int *T = table;
  for (int i = 1; i <= *N; i++)
  {
    if (*N % i == 0)
    {
      T[j] = i;
      j++;
    }
  }

  for (int i = 0; i < j; i++)
  {
    printf("%d", T[i]);
    if (i < j - 1)
    {
      printf(",");
    }
  }
  printf("\n");
  return 0;
}
