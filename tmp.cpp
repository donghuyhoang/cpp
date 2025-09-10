#include <iostream>
using namespace std;

bool incre(int x,int y){
  return x > y;
}
bool decre(int x, int y){
  return x < y;
}

void swap(int &x,int &y){
  int tmp = x;
  x = y;
  y = tmp;
}

void insort(int *p,int n, bool cmp(int,int)){
  for (int i = 0; i < n - 1; i++){
    for (int j = i + 1; j < n; j++){
      if(cmp(*(p + i),*(p + j))) swap(*(p + i),*(p + j));
    }
  }
}

void show1(int *p,int n){
  for (int i = 0; i < n; i++) cout << *(p + i) << ' ';
}

void show2(int **p, int n){
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      cout << *(*(p + i) + j) << ' ';
    }
    cout << endl;
  }
}

int test(int x,int y = 2){
  return x + y;
}

int main() {
  int n; cin >> n;
  int **p;
  p = new int *[n];
  for (int i = 0; i < n; i++){
    *(p + i)  = new int[n];
    for (int j = 0; j < n; j++){
      cin >> *(*(p + i) + j);
    }
  }
  show2(p,n);
   return 0;
}
