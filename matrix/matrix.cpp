#include <iostream>
#include <vector>
using namespace std;

struct Matrix{
    int n,m;
    vector<vector<int>> x;
    Matrix(int n, int m) : n(n),m(m){
        x.assign(n,vector<int>(m,0));
    }
    void input(){
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> x[i][j];
            }
        }
    }
    void output(){
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cout << x[i][j] << ' ';
            }
            cout << endl;
        }
    }
    friend Matrix operator*(const Matrix&, const Matrix&);
};
Matrix operator*(const Matrix& a, const Matrix& b){
    Matrix c(a.n,b.m);
    int n = a.n,m = b.m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            long long res = 0;
            for (int l = 0; l < a.m; l++){
                res += a.x[i][l] * b.x[l][j];
            }
            c.x[i][j] = res;
        }
    }
    return c;
}

int main() {
    int n,m; cin >> n >> m;
    Matrix M(n,m),M1(n,m);
    M.input();
    M1.input();
    Matrix M2 = M * M1;
    M2.output();
}
