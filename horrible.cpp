#include <bits/stdc++.h>

typedef long long LL;
typedef double DB;

#define sf scanf
#define pf printf
#define mp make_pair
#define nl printf("\n")

#define FOR(i,a,b) for(i = a; i <= b; ++i)
#define FORD(i,a,b) for(i = a; i >= b; --i)
#define FORS(i,n) for(i = 0; i < n; ++i)
#define FORM(i,n) for(i = n - 1; i >= 0; --i)
#define reset(i,n) memset(i, n, sizeof(i))

using namespace std;

const LL mod = 1e9 + 7;
const LL INF = 4e18;
const int inf = 2e9;

int gcd(int a, int b) { return b? gcd(b, a%b): a; }
int lcm(int a, int b) { return a/ gcd(a, b)*b; }

struct fenwick {
public:
	fenwick(int _n) : n(_n) {
		a.resize(n + 1);
		at.resize(n + 1);
	};
	void update(int l, int r, long long val) {
		_update(l, val, val * l);
		_update(r + 1, -val, -val * (r + 1));
	}
	long long find(int l, int r) {
		return find(r) - find(l - 1);
	}
private:
	void _update(int pos, long long aval, long long atval) {
		for(; pos <= n; pos |= pos + 1) {
			a[pos] += aval;
			at[pos] += atval;
		}
	}
	long long find(int pos) {
		int r = pos;
		long long aval = 0, atval = 0;
		for(; pos >= 0; pos = (pos & (pos + 1)) - 1) {
			aval += a[pos];
			atval += at[pos];
		}
		return (r + 1) * aval - atval;
	}
	vector<LL> a, at;
	int n;
};

int main(void)
{
	int t; sf("%d", &t);
	while(t--) {
		int n, q, type, l, r;
		LL v;
		sf("%d %d", &n, &q);
		fenwick fen(n);
		while(q--) {
			sf("%d %d %d", &type, &l, &r);
			--l, --r;
			if(type)
				pf("%lld\n", fen.find(l, r));
			else {
				sf("%lld", &v);
				fen.update(l, r, v);
			}
		}
	}
	return 0;
}