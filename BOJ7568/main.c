#include <stdio.h>
#include <stdlib.h>

struct abc
{
	int x;
	int y;
	int z;
};

int main()
{
	int n;

	scanf("%d", &n);

	struct abc* a = (struct abc*)malloc(sizeof(struct abc) * n);

	for (int i = 0; i < n; i++) 
	{
		scanf("%d %d", &a[i].x, &a[i].y);
	}

	for (int i = 0; i < n; i++)
	{
		a[i].z = 1;

		for (int j = 0; j < n; j++)
		{
			if (a[j].x > a[i].x && a[j].y > a[i].y)
			{
				a[i].z++;
			}
		}
	}

	for(int i = 0;i<n;i++)
		printf("%d ", a[i].z);
	printf("\n");

	free(a);

	return 0;
}