#include<stdio.h>
#define ll long long
float a[100000];
int main(){
  int n; float k;
  scanf("%d%f",&n,&k);
  for (int i = 1; i <= n + 1;i++){
    scanf("%f",&a[i]);
  }
  double res = a[1];
  for (int i = 2; i <= n + 1; i++){
    res *= k;
    res += a[i];
  }
  printf("%.3llf",res);
}
