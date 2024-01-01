#include <iostream>
using namespace std;
float solve(int dividend, int divisor) {

  if(divisor == 0){
    return 0;
  }
  
  float s = 0;
  float e = dividend;
  float mid = s + (e - s) / 2;
  float ans = -1;
  while (s <= e) {
    if (mid * divisor == dividend) {
      return mid;
    } else if (mid * divisor > dividend) {
      e = mid - 0.001;
    } else {
      ans = mid;
      s = mid + 0.001;
    }
    mid = s + (e - s) / 2;
  }
  return ans;
}

int main() {
  int dividend = -34;
  int divisor = 7;
  float quotient = solve(abs(dividend), abs(divisor));
  if((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)){
    quotient = 0 - quotient;
  }
  cout<<"ans is "<<quotient<<endl;
  return 0;
}
