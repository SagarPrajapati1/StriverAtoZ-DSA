#include <bits/stdc++.h>
using namespace std;
class Solution
{	
	public:
		int LargestElement(vector<int> arr, int n){
			
			//take a variable
			int maxi = INT_MIN;
			for (int i = 0; i < n; ++i){
				//check for maximun element
				if(arr[i] > maxi)
					maxi = arr[i];
			}
			return maxi;
		}
};

int main()
{
	Solution obj;
	
	int n;
	cin >> n;
	
	vector<int> arr(n,0);

	
	for (int i = 0; i < n; ++i){
		cin >> arr[i];
	}

	int maxi = obj.LargestElement(arr, n);
	cout << maxi;

	return 0;
}