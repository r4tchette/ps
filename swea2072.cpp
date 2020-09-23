#include <iostream>

using namespace std;

int	main(void)
{
	int T, n, sum;

	scanf("%d", &T);

	for (int t = 1; t <= T; ++t)
	{
		sum = 0;
		for (int i = 0; i < 10; ++i)
		{
			scanf("%d", &n);
			if (n % 2 == 1)
				sum += n;
		}
		printf("#%d %d\n", t, sum);
	}
	return (0);
}
