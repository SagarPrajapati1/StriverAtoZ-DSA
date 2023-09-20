#include <bits/stdc++.h>
using namespace std;
class Solution {
	public : 
	void rotateArray(vector<int> &arr, int n, int k)

	{
	

		for (int i = k; i < n; ++i)
		{
			cout << arr[i] << " ";
		}

		for (int i = 0; i < k; ++i)
		{
			cout << arr[i] << " ";
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

			int d;
			cout << "Enter d: ";
			cin >> d;
			obj.rotateArray(arr, n, d);

			cout << endl;
			return 0;
	}