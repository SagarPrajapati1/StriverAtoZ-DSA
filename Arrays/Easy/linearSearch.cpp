#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	int linearSearch(int arr[], int n, int k){
		for (int i = 0; i < n; i++) {
			if(arr[i] == k)
				return i;
		}
		return -1;
	}
	

};

int main()
{
Solution obj;

int n;
cin >> n;
int arr[10];
for (int i = 0; i < n; i++){
		cin >> arr[i];
}

int k;
cout << "Enter element to be search: ";
cin >> k;
cout <<"Element present at index: " << obj.linearSearch(arr, n, k);


return 0;
}