#include <stdio.h>
#include <stdbool.h>

int main(void)
{
     FILE *output;

     // output = fopen("io.txt", "w");
     output = fopen("io.txt", "a");
     printf("program start !!!\n");
     fputs("hello world \n", output);
     // fprintf(output, "name is %s ", "roy fabius");
     // fprintf(output, ",age are %d\n", 75);
     // fputs("\nexit\n", output);
     for (int i = 0; i <= 10; i += 1)
          fprintf(output, "%d\n", i);

     fclose(output);
     printf("end of program\n");
     return 0;
}
