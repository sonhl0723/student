#include <iostream>
#include <cstdio>

using namespace std;

int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  long long n, result;
  long long first = 0;
  long long second = 1;

  cin >> n;

  if(n == 0){
    second = 0;
  }

  while(n > 1){
    result = first + second;
    first = second;
    second = result;
    n--;
  }

  cout << second << '\n';

  return 0;
}
