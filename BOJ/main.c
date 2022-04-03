#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct circle {
	int x, y, r;
};

int main()
{
	int t;

	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		struct circle c1, c2;

		scanf("%d %d %d %d %d %d", &c1.x, &c1.y, &c1.r, &c2.x, &c2.y, &c2.r);
		
		long double d;
		d = sqrtl(pow((c2.x - c1.x), 2) + pow((c2.y - c1.y), 2));

		if ((abs(c1.r - c2.r) < d) && (d < abs(c1.r + c2.r)))
			printf("2\n");
		else if(c1.x == c2.x && c1.y == c2.y && c1.r == c2.r)
			printf("-1\n");
		else if (abs(c1.r - c2.r) == d || abs(c1.r + c2.r) == d)
			printf("1\n");
		else if ((c1.r + c2.r < d) || (abs(c1.r - c2.r) > d) || d == 0)
			printf("0\n");
		
	}

	return 0;
}