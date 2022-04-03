#include <stdio.h>

int main()
{
	char arr[50][50];
	int n, m;
	int minval = 64, cnt = 0;

	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
		scanf("%s", &arr[i]);

	for (int i = 0; i < n - 7; i++) {
		for (int j = 0; j < m - 7; j++) {
			cnt = 0;
			for (int k = i; k < i + 8; k++) {
				for (int l = j; l < j + 8; l++) {
					if ((k + l) % 2 == 0) {
						if (arr[k][l] == 'B')
							cnt++;
						else;
					}
					else {
						if (arr[k][l] == 'W')
							cnt++;
						else;
					}
				}
			}
			cnt = (cnt > 32) ? 64 - cnt : cnt;
			minval = (cnt < minval) ? cnt : minval;
		}
	}

	printf("%d\n", minval);

	return 0;
}