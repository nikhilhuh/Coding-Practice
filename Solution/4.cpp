#include <bits/stdc++.h>
using namespace std;

using LL = long long;

inline bool IsPalindrome(LL t){
  if (t < 0) return false;
  LL k = t;
  LL rev = 0;
  while(k){
    LL digit = k % 10;
    rev = rev * 10 + digit;
    k /= 10;
  }
  return t == rev;
}

int main(){
  int n, num = 1;
  cin >> n;
  while(n > 0){
    if(IsPalindrome(num)) {
      n--;
    }
    num++;
  }
  cout << num - 1 << endl;
  return 0;
}