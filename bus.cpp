#include <bits/stdc++.h>

using namespace std;

#define LL long long
#define DB double
#define sf scanf
#define pf printf
#define nl printf("\n")
#define FOR(i,a,b) for(i = a; i <= b; ++i)
#define FORD(i,a,b) for(i = a; i >= b; --i)
#define FORS(i,n) for(i = 0; i < n; ++i)
#define FORM(i,n) for(i = n - 1; i >= 0; --i)
#define reset(i,n) memset(i, n, sizeof(i))
#define open freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
#define close fclose(stdin); fclose(stdout)
#define mp make_pair

const LL mod = 1e9 + 7;
const LL inf = 4e18;

int gcd(int a, int b) { return b? gcd(b, a%b): a; }
int lcm(int a, int b) { return a*b / gcd(a, b); }

int a[105];

int main(void)
{
	int n, m, i;
	sf("%d %d", &n, &m);
	int ans = 0, now = 0;
	FORS(i, n) {
		sf("%d", &a[i]);
	}
	FORS(i,n) {
		if(now + a[i] > m) {
			ans++;
			now = 0;
		}
		now += a[i];
	} 
	cout << ans+1 << endl;
	return 0;
}
