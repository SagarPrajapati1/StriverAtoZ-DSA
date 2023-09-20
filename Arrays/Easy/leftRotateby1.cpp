#include <bits/stdc++.h>
using namespace std;
class Solution {

	public:
	vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    int temp = arr[0];

    for(int i = 1; i < n; ++i){
        arr[i-1] = arr[i];
    }

    arr[n-1] = temp;
    return arr;
}

};

int main()
{
Solution obj;


	int n;
	cout << "Enter n: ";
	cin >> n;
	vector<int> arr(n,0);
	cout << "Enter array elements : ";
	for(int i = 0; i < n; i++){
	cin >> arr[i];
	}

	obj.rotateArray(arr, n);

	for (int i = 0; i < n; i++){
	cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}