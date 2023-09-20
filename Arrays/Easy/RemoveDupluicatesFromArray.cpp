#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
	// void removeDuplicate(int arr[], int n)
	// {
	// 	set<int> st;
	// 	for (int i = 0; i < n; ++i)
	// 	{
	// 		st.insert(arr[i]);
	// 	}
	// 	int i = 0;
	// 	for (auto it : st)
	// 	{
	// 		arr[i++] = it;
	// 	}
	// }
	int removeDuplicate(int arr[], int n)
	{
		int *res = new int[10];
		int count = 1;
		res[0] = arr[0];

		int i = 0;
		for (int j = 1; j < n; j++)
		{
			if (arr[i] != arr[j])
			{
				i++;
				arr[i] = arr[j];
			}
		}
		return i + 1;
	}
};

int main()
{
	Solution obj;

	int n;
	cout << "Enter the n: ";
	cin >> n;

	int arr[10];
	cout << "Enter array elements: ";

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	int k = obj.removeDuplicate(arr, n);
	cout << "Array after rmoving duplicate elements: ";

	for (int i = 0; i < k; ++i){
		cout << arr[i] << " ";
	}

	return 0;
}