#include <iostream>
#include <vector>
using namespace std;

int bs(vector<int> &nums, int target) {
  int s = 0;
  int e = nums.size() - 1;
  int mid = s + (e - s) / 2;
  int n = nums.size();
  while (s <= e) {
    if (nums[mid] == target) {
      return mid;
    } else if (mid - 1 >= 0 && nums[mid - 1] == target) {
      return mid - 1;
    } else if (mid + 1 <= n && nums[mid + 1] == target) {
      return mid + 1;
    } else if (nums[mid] > target) {
      e = mid - 2;
    } else if (nums[mid] < target) {
      s = mid + 2;
    }
    mid = s + (e - s) / 2;
  }
  return -1;
}

int main() {
  vector<int> arr = {20, 10, 30, 50, 40, 70, 60};
  int target = 700;
  int n = arr.size();
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  if (bs(arr, target) != -1) {
    cout << "target found at index " << bs(arr, target) << endl;
  } else {
    cout << "target not found" << endl;
  }
  return 0;
}
