#include <bits/stdc++.h>

using namespace std;

int main() {
  multiset<int> a;
  int n;
  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    int num;
    scanf("%d", &num);
    a.insert(num);
  }
  int now = 0;
  while(a.lower_bound(now) != a.end()) {
    auto it = a.lower_bound(now);
    auto ne = a.lower_bound(now);
    ne++;
    now = *it;
    if(ne != a.end() && *ne == now) {
      a.erase(ne);
      a.erase(it);
      a.insert(now + 1);
    } else {
      now++;
    }
  }
  cout << a.size() << endl;
  return 0;
}
