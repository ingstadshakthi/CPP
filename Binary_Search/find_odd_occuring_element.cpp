#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &nums, int s, int e) {
  for (int i = s; i <= e; i++) {
    cout << nums[i] << " ";
  }
  cout << endl;
}

int solve(vector<int> &nums) {
  int n = nums.size();
  int s = 0;
  int e = n - 1;
  int mid = s + (e - s) / 2;

  while (s <= e) {

    if (s == e)
      return s;

    if (mid & 1) {
      if (mid - 1 >= 0 && nums[mid] == nums[mid - 1] )
        s = mid + 1;
      else
        e = mid - 1;

    } else {
      if (mid + 1 < n && nums[mid] == nums[mid + 1] )
        s = mid + 1;
      else
        e = mid;
    }
    mid = s + (e - s) / 2;
  }
  return -1;
}

int main() {
  vector<int> nums = {1, 1, 5, 5, 2, 2, 9, 9, 6, 6, 2, 8, 8, 7, 7, 3, 3};
  int ans = solve(nums);
  cout << nums[ans] << endl;
  return 0;
}
