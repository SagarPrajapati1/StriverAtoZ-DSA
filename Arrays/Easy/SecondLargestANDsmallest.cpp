#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
	int secondlargest(int arr[], int n)
	{

		int slargest = INT_MIN;
		int largest = INT_MIN;

		for (int i = 0; i < n; i++)
		{
			if (arr[i] > largest)
			{
				slargest = largest;
				largest = arr[i];
			}
			else if (slargest < arr[i] && arr[i] < largest)
			{
				slargest = arr[i];
			}
		}

		return slargest;
	}

	int secondSmallest(int arr[], int n)
	{

		int ssmallest = INT_MAX;
		int smallest = INT_MAX;

		for (int i = 0; i < n; i++)
		{
			if (arr[i] < smallest)
			{
				ssmallest = smallest;
				smallest = arr[i];
			}

			else if (ssmallest > arr[i] && arr[i] > smallest)
			{
				ssmallest = arr[i];
			}
		}
		return ssmallest;
	}
};

int main()
{
	Solution obj;
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	cout << "second largest = " << obj.secondlargest(arr, n) << endl;
	cout << "second smallest = " << obj.secondSmallest(arr, n);

	return 0;
}