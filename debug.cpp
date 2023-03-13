#include <bits/stdc++.h>
using namespace std;

#define NAME "sol"

mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());

int Rd(int l, int r){
  return l + (rd() * 1LL * rd() % (r - l + 1) + (r - l + 1)) % (r - l + 1);
}

void T(){
  ofstream cout(NAME".in");
}

const int ntest = 100;

int main(){
//  ios_base::sync_with_stdio(false);
//  cin.tie(NULL);
  srand(time(0));
  for (int i = 1; i <= ntest; i++){
    T();
//    int i = 0;
    system(NAME".exe");
    system(NAME"_trau.exe");
    if(system("fc " NAME".out " NAME".ans") != 0) return cout << "TEST :" << i << " WRONG",0;
    else cout << "TEST :" << i << " ACCEPT" << " \n"; 
  }
}
