#include <bits/stdc++.h>
using namespace std;
 
struct Point{
  long long x,y;
};
 
bool ccw(const Point& a,const Point& b,const Point &c){
  return (1LL * (b.x - a.x) * (c.y - a.y) - 1LL * (c.x - a.x) * (b.y - a.y)) > 0;
}
 
Point vec(Point a, Point b){
  Point res;
  res.x = b.x - a.x;
  res.y = b.y - a.y;
  return res;
}
 
int main(){
  int n; cin >> n;
  vector<Point> p,hull;
  for (int i = 0; i < n; i++){
    Point p1;
    cin >> p1.x >> p1.y;
    p.push_back(p1);
  }
  sort(p.begin(),p.end(),[](const Point &a,const Point &b){
    if(a.x != b.x) return a.x < b.x;
    return a.y < b.y;
  });
  hull.push_back(p[0]);
  for (int i = 1; i < n; i++){
    while(hull.size() >= 2 && ccw(hull[hull.size()-2],hull.back(),p[i])){
      hull.pop_back();
    }
    hull.push_back(p[i]);
  }
  for (int i = n - 2; i >= 0; i--){
    while(hull.size() >= 2 && ccw(hull[hull.size()-2],hull.back(),p[i])){
      hull.pop_back();
    }
    hull.push_back(p[i]);
  }
  if(n > 1) hull.pop_back();
  cout << hull.size() << endl;
  for (int i = 0; i < hull.size(); i++){
    cout << hull[i].x << ' ' << hull[i].y << endl;
  }
}
