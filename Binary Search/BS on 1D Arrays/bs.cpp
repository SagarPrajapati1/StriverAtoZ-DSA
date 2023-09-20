#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int key) {
	int s = 0;
	int e = n-1;
	
	while(s <= e) {
		int mid = s + (e-s)/2;
		if(arr[mid] == key) {
			return mid;
		}
		else if(arr[mid] < key) {
			s = mid + 1;
		}
		else e = mid - 1;
	}
	return -1;
}


int main() {
	int arr[] = {1,3,5,7,9,11,13,15};
	int n = 8;
	int key = 1;
	int index = binarySearch(arr, n, key);

	if(index == -1) cout << "Not found";
	else cout << "found" << endl;

	cout << binarySearch(arr, n,key);
	return 0;
}
