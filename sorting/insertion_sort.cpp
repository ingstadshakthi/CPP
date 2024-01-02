#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &nums, int n) {
  for (int i = 0; i < n; i++) {
    cout << nums[i] << " ";
  }
  cout << endl;
}

void insertionSort(vector<int> &nums, int n) {
  for (int i = 1; i < n; i++) {
    int key = nums[i];
    int j;
    for (j = i - 1; j >= 0; j--) {
      nums[j + 1] = nums[j];
    }
    nums[j + 1] = key;
  }
}

int main() {
  vector<int> nums = {5, 4, 3, 2, 1};

  int n = nums.size();
  insertionSort(nums, n);
  print(nums, n);

  return 0;
}
