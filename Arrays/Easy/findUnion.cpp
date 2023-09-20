#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
	vector<int> sortedArray(vector<int> a, vector<int> b)
	{
		// Write your code here

		int first = 0;
		int second = 0;
		vector<int> ans;

		while (first < a.size() && second < b.size())
		{

			if (a[first] <= b[second])
			{
				if (ans.size() == 0 || ans.back() != a[first])
				{
					ans.push_back(a[first]);
				}
				first++;
			}
			else
			{
				if (ans.size() == 0 || ans.back() != b[second])
				{
					ans.push_back(b[second]);
				}
				second++;
			}
		}

		while (first < a.size())
		{
			if (ans.back() != a[first])
			{
				ans.push_back(a[first]);
			}
			first++;
		}

		while (second < b.size())
		{
			if (ans.back() != b[second])
			{
				ans.push_back(b[second]);
			}
			second++;
		}

		return ans;
	}
};

int main()
{
	Solution obj;

	int n;
	int m;
	cout << "Enter n & m: ";
	cin >> n >> m;

	cout << "Enter array elements: ";

	vector<int> a(n, 0);
	vector<int> b(m, 0);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
	}

	vector<int> ans;
	ans = obj.sortedArray(a, b);
	for (int i = 0; i < ans.size(); i++){
	cout << ans[i] << " ";
	}
	cout << endl;

	return 0;
}