#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int N = 0;
	cin >> N;
	bool flag = 0;
	for (int i = 2; i <= N; i++)
	{
		flag = true;
		int x = sqrt(i);
		for (int j = 2; j <= x; j++)
		{
			if (i % j == 0)
			{
				flag = false;
				break;
			}
		}
		if (flag)
		{
			cout << i << " ";
		}
	}
	return 0;
}
