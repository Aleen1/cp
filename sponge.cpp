#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  printf("%d\n", min(min(a + b + c, 2 * (a + b)), min(2 * (a + c), 2 * (b + c))));
  return 0;
}
