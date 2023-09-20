#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
	int findMaxConsecutiveOnes(int n, vector<int> &nums)
	{
		int cnt = 0;
		int maxi = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] == 1)
			{
				cnt++;
			}
			else
			{
				cnt = 0;
			}

			maxi = max(maxi, cnt);
		}
		return maxi;
	}
};

int main()
{
	Solution obj;
	int n;
	cout << "Enter n: ";
	cin >> n;
	
	vector<int> vec(n, 0);
	cout << "Enter the array elements: ";
	for (int i = 0; i < n; i++)
	{
		cin >> vec[i];
	}

	int ans = obj.findMaxConsecutiveOnes(n, vec);

	cout << "Maximum ones is : " << ans << endl;

	return 0;
}