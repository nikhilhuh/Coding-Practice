#include<iostream>
using namespace std;

int main(){
  string s;
  cin >> s;
  int TotalASCII = 0;
  for(char c : s){
    TotalASCII += (int)c;
  }
  cout << "Average ASCII value: " << TotalASCII / s.length() << endl;
  return 0;
}