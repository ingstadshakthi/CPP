#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void printNestedVector(vector<vector<int>> nestedVector){
  cout<<endl;
  for(int i = 0; i < nestedVector.size(); i++){  
    for(int j = 0; j < nestedVector[i].size(); j++){
      cout<<nestedVector[i][j]<<" "; 
    }
    cout<<endl;
  }
  cout<<endl;
}

void print(vector<int> &v) {
  int n = v.size();
  for (int i = 0; i < n; i++) {
    cout << v[i] << " ";
  }
  cout << endl;
}
bool myComp(int a, int b) { 
  return a > b; 
}

bool myComparator(vector<int> a, vector<int> b) {
  return a[1] < b[1];
}

int main() {
  vector<int> v = {44, 33, 55, 22, 11};
  print(v);
  sort(v.begin(), v.end());
  print(v);
  sort(v.begin(), v.end(),myComp);
  print(v);


  vector<vector<int>> nums = {{2,44},{1,33},{2,55},{0,22},{1,11}};
  printNestedVector(nums);

  sort(nums.begin(), nums.end(),myComparator);
  printNestedVector(nums);
  
}
