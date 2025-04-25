#include <assert.h>
#include <errno.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, m, x, y, k, px = 0, py = 0, d, min = 0;
	scanf("%d%d%d%d%d",&n,&m,&x,&y,&k);
	int *area = (int *) malloc(n * m);
	for(int i=0; i<k; i++)
	{
		scanf("%d", &d);
		switch(d)
		{
			case 1:
				py++;
				break;
			case 2:
				py--;
				break;
			case 3:
				px++;
				break;
			default:
				px--;
		}
		if ( (x == px || x == px - 1 || x == px + 1) && ( y == py || y == py + 1 || y == py - 1) )
		{
			min++;
		}
	}
	printf("%d\n", min);
	free(area);
	return 0;
}
