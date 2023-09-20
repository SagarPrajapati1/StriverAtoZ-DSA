#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
	int getSingleElement(vector<int> &arr)
	{
		// Write your code here.

		for (int i = 0; i < arr.size(); i += 2)
		{
			if (arr[i] != arr[i + 1])
				return arr[i];
		}
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
	int ans = obj.getSingleElement(vec);
	cout << "Single element is : " << ans << endl;

	return 0;
}