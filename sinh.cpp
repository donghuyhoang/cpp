#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define NAME "sol"
mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());

int Rand(long long l, long long r){
  return l + (rd() * 1LL * rd() % (r - l + 1) + (r - l + 1)) % (r - l + 1);
}

void Make_Test(){
  ofstream cout(NAME".in");
}

const int test = 50;

int main(){
//  freopen("sol.in","r",stdin);
//  freopen("sol.out","w",stdout);
  srand(time(0));
  for (int i = 1; i <= test; i++){
    Make_Test();
    system(NAME"_trau.exe");
    system(NAME".exe");
    if(system("fc " NAME".out " NAME".ans")) return cout << "TEST: " << i << " Wrong",0;
    else cout << "TEST: " << i << " ACCEPT" << endl;
  }
}
