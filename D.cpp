#include <iostream>
#include <vector>
using namespace std;

const int Lim = 1e5;
vector<int> pr;
vector<int> lpf;
void linear_sieve(int n = 500) {
    pr = {2};
    lpf.assign(n + 1, 2);

    for (int x = 3; x <= n; x += 2) {
        if (lpf[x] == 2) pr.push_back(lpf[x] = x);
        for (int i = 1; i < pr.size() && pr[i] <= lpf[x] && pr[i] * x <= n; ++i)
            lpf[pr[i] * x] = pr[i];
    }
}

bool prime(int x) {
    if (x <= 1) return false;
    return lpf[x] == x;
}

int n, sum[Lim + 1], res = 1;
int main() {
    cin >> n;
    linear_sieve();
    for (int i = 1; i <= Lim; ++i) sum[i] = sum[i / 10] + ((i % 10) * (i % 10));
    
    for (int i = 1; n > 0; ++i) {
        if (prime(sum[i])) cout << i << ' ',--n;
    }
    //cout << res;
}