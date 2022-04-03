#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, m;
	int clsrval = 0;

	scanf("%d %d", &n, &m);

	int* a = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) 
	{
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n - 2; i++) 
	{
		for (int j = i + 1; j < n - 1; j++) 
		{
			for (int k = j + 1; k < n; k++) 
			{
				int sum = a[i] + a[j] + a[k];				

				if (sum > m)
					continue;

				if (sum > clsrval)
					clsrval = sum;
			}
		}
	}

	printf("%d\n", clsrval);

	free(a);

	return 0;
}