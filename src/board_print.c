#include <stdio.h>

void print(char a[][9])
{
  for (int i=0;i<=8;i++)
     {for (int j=0;j<=8;j++)
       printf (" %c",a[i][j]);
          printf("\n");}
}
