#include <iostream>
using namespace std;

int visitedMethod(int *nums, int n){

    for(int i = 0; i < n; i++){
        int index = abs(nums[i]) - 1;
        if(nums[index] > 0)
            nums[index] *= -1;
    }

    // Print the missing Elements
    for(int i=0; i<n; i++){
        if(nums[i] > 0)
            cout<<i + 1<<" ";
    }
    cout<<endl;
    
    // change the array back to positive integers
    for(int i=0; i<n; i++){
        if(nums[i] < 0)
            nums[i] *= -1;
    }
   
}

int sortAndSwapMethod(int *nums, int n){
    int i = 0;
    while(i < n){
        int index = nums[i] - 1;
        if(nums[i] != nums[index])
            swap(nums[index],nums[i]);
        else
            i++;   
    }
    for(int i = 0; i< n; i++)
        if(nums[i] != i+1)
            cout<<i + 1<<" ";
            
    cout<<endl;
}


int main() {
	int arr[] = {1,3,5,3,4};
	int n = sizeof(arr)/sizeof(int);
	visitedMethod(arr,n);
	sortAndSwapMethod(arr,n);
	return 0;
}
