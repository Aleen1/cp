#include <bits/stdc++.h>

using namespace std;

const int N = 1e7 + 5;

char s[N];

int main() {
  int n;
  scanf("%d %s", &n, s);
  int a = 0, in = 0;
  for(int i = 0; i < n; i++) {
    if(s[i] == 'A') a++;
    else if(s[i] == 'I') in++;
  }
  if(in > 1) puts("0");
  else if(in == 1) puts("1");
  else printf("%d\n", a);
  
  return 0;
}
