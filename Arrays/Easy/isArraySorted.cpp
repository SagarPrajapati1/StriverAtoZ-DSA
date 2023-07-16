#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	string isSorted(int arr[], int n) {
		for (int i = 1; i < n; i++){
			if(arr[i] < arr[i - 1]) 
				return "NO";
		}
		return "YES";
	}
};

int main()
{
Solution obj;

int n;
cin >> n;

int arr[10];
for(int i = 0; i < n; i++){
	cin >> arr[i];
}

cout << "Is array sorted " << obj.isSorted(arr, n) << endl;


return 0;
}