
#define ll long long
struct Fenwicktree{
  int n;
  vector<ll> BIT;
  Fenwicktree(int n) {
    this->n = n;
    BIT.assign(n,0);
  }
  Fenwicktree (const vector<ll>& a) : Fenwicktree(a.size()){
    for (int i = 1; i <= n; i++){
      update(i,a[i]);
    }
  }
  ll sum(int index){
    ll res = 0;
    while(index >= 1){
      res += BIT[index];
      index -= index & (-index);
    }
    return res;
  }
  void update(int index, int val){
    while(index <= n){
      BIT[index] += val;
      index += index & (-index);
    }
  }
};
