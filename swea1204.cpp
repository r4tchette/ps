#include<iostream>

using namespace std;

int main(int argc, char** argv)
{

	int test_case;
	int T;
	int max, n, score[101];

	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
		max = 0;
		scanf("%d", &test_case);
		for (int i = 0; i <= 100; ++i)
			score[i] = 0;
		for (int i = 0; i < 1000; ++i)
		{
			scanf("%d", &n);
			score[n] += 1;
			max = max > score[n] ? max : score[n];
		}
		for (int i = 100; i > 0; --i)
		{
			if (score[i] == max)
			{
				printf("#%d %d\n", test_case, i);
				break ;
			}
		}
	}
	return 0;
}
