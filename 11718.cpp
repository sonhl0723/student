#include <iostream>
#include <cstdio>

using namespace std;

int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string str;

  while(1){
    getline(cin, str);
    if(str == ""){
      break;
    }

    cout << str << '\n';
  }

  return 0;
}
