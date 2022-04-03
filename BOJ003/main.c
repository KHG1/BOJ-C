#include <stdio.h>
#include <math.h>

int main()
{
	int n, res = 0;

	scanf("%d", &n);

	for (int i = 0; i <= n; i++)
	{
		int sum = i;
		int j = i;

		while (j)
		{
			sum += j % 10;
			j /= 10;
		}

		if (sum == n)
		{
			res = i;
			break;
		}
	}

	printf("%d\n", res);
}