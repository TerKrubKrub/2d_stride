#include <stdio.h>
int main()
{
	int i, j, n, z;
	int x[500],y[500];
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		x[i] = i;
		y[i] = i;
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (x[j] >= 10) printf("%d ", x[j] % 10);
			else printf("%d ", x[j]);
		}
		printf("\n");
		for (j = 2; j <= n; j++)
		{
			x[j] = y[j - 1];
		}
		x[1] = y[n];
		for (j = 1; j <= n; j++)
		{
			y[j] = x[j];
		}
	}
	return 0;
}