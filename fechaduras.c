// completed

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char**argv)
{
  int n, v, mov = 0;
  scanf("%d %d", &n, &v);
  int* n_vet = (int*) malloc(n * sizeof(int));
  for(int i=0; i<n; i++)
  {
    scanf("%d", &n_vet[i]);
  }
  for(int i=0; i<n-1; i++)
  {
    while(n_vet[i] > v)
    {
      n_vet[i]--;
      n_vet[i+1]--;
      mov++;
    }
    while(n_vet[i] < v)
    {
      n_vet[i]++;
      n_vet[i+1]++;
      mov++;
    }
  }
  while(n_vet[n-1] > v)
  {
    n_vet[n-1]--;
    mov++;
  }
  while(n_vet[n-1] < v)
  {
    n_vet[n-1]++;
    mov++;
  }
  printf("%d\n", mov);
  return 0;
}