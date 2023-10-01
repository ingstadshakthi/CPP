#include <iostream>
using namespace std;

int findPivotElement(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start < end){
        int mid = start/2 + end/2;
        if(arr[mid] < arr[mid-1]){
            return arr[mid - 1];
        }else if(arr[mid] < arr[mid + 1]){
            return arr[mid];
        }else if(arr[mid] < arr[start]){
            end = mid;
        }else{
            start = mid;
        }
    }
}

int main() {
	int arr[] = {12, 14, 16, 2, 4, 6, 8, 10};
	int n = 8;
    int result = findPivotElement(arr,n);
    cout<<"answer is "<<result;
	return 0;
	
}
