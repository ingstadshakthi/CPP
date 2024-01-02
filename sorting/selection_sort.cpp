#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> arr = {44,33,55,22,11};
  int n = arr.size();
  for(int i = 0; i <n-1;i++){
    int minIndex = i;
    for(int j = i+1; j<n;j++){
      if(arr[j] < arr[minIndex]){
        minIndex = j;
      }
    }
    if(minIndex != i){
      swap(arr[i],arr[minIndex]);
    }
  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
