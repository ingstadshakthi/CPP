#include <iostream>
using namespace std;
    float solve(int x){
        float s = 1;
        float e = x;
        float m = s + (e-s)/2;
        float ans = -1;
        while(s<=e){
            if( m * m == x ){
                return m;
            }
            if( m * m > x)
                e =  m - 0.0001;
            else{
                ans = m;
                s = m + 0.0001;
            }
            m = s + (e-s)/2;

        }
        return ans;
    }
int main() {
  cout<<solve(68);
  return 0;
}
