#include <stdio.h>

int main(void)
{
  int graph[80][80] = {0};
  unsigned int inputnum;
  unsigned int colno = 0;
  unsigned int heightest = 0;

  while((scanf("%d", &inputnum)) != EOF )
  {
    int j;
    if (heightest < inputnum)
    {
      heightest = inputnum;
    }
    for (j=0; j < inputnum; j++)
    {
      graph[colno][79 - j] = 1;
    }
    colno++;
  }
  unsigned int i,k;
  for (i=80 - heightest; i < 80; i++)
  {
    for (k=0; k<colno; k++)
    {
      if (graph[k][i] == 1)
      {
        printf("#");
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}
