#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
	int missingNumber(vector<int> &nums)
	{
		int num = 0, n = nums.size(), x = nums[0];
		for (int i = 1; i <= n; i++)
			num ^= i;
		for (int i = 1; i < n; i++)
			x ^= nums[i];
		return num ^ x;
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
	for (int i = 0; i < n; i++){
		cin >> vec[i];
	}

	int ans = obj.missingNumber(vec);

	cout << "Missing number is : " << ans << endl;
	return 0;
}