#include <stdio.h>
#include <stdbool.h>

bool verify(int a, int b, int c)
{
  if(a + b <= c) return false;
  if(a + c <= b) return false;
  if(b + c <= a) return false;
  return true;
}

int main()
{
  int palitos[4];
  for(int i=0; i<4; i++)
    scanf("%d", palitos+i);

  if(verify(palitos[0], palitos[1], palitos[2]))
    printf("S\n");
  else if(verify(palitos[0], palitos[1], palitos[3]))
    printf("S\n");
  else if(verify(palitos[0], palitos[2], palitos[3]))
    printf("S\n");
  else if(verify(palitos[1], palitos[2], palitos[3]))
    printf("S\n");
  else
    printf("N\n");

  return 0;
}
