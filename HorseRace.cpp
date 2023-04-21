#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t, N, M, X;
	cin >> t;
	while (t--)
	{
		cin >> N >> M >> X;
		int arr[N] = {0};
		for (int i = 0; i < N; i++)
		{
			cin >> arr[i];
		}
		sort(arr, arr + N);
		int arr_B[M] = {0};
		int i;
		for (i = 0; i < N; i++)
		{
			if (arr[i] >= 1 && arr[i] <= M)
				arr_B[arr[i] - 1] += 1;
			else
				break;
		}

		int rem = N - i;
		auto min = min_element(arr_B, arr_B + N);
		if (rem > X)
		{
			*min = *min + X;
		}
		else
		{
			*min = *min + rem;
		}

		cout << *min << endl;
	}
}