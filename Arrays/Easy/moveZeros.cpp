#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
	void moveZeros(int n, vector<int>& a)
	{
		// Write your code here.

		int l = 0, r = 0;
		while (r < n)
		{
			if (a[r] != 0)
			{
				swap(a[l], a[r]);
				l++;
				r++;
			}
			else
				r++;
		}
	}
};

int main()
{
	Solution obj;

	int n;
	cout << "Enter n: ";
	cin >> n;
	vector<int> arr(n, 0);
	cout << "Enter array elements : ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	obj.moveZeros(n, arr);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}