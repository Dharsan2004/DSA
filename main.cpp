#include<bits/stdc++.h>
using namespace std;
//___________________________________________________________________________________
// shotcuts
#define pb push_back
#define pf push_front
#define all(x) x.begin(),x.end()
#define int long long int
#define ff first
#define ss second
#define endl '\n'
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define toUp(s) ::transform(s.begin(), s.end(), s.begin(), ::toupper)
#define toLow(s) ::transform(s.begin(), s.end(), s.begin(), ::tolower);
#define MOD 1000000007
#define INF 1e18
#define bits(n) __builtin_popcount(n)
#define tc() int t; cin>>t; while(t--)

//___________________________________________________________________________________
// debug statements
#ifdef dharsanS2004
#define debug(x) cerr<<#x<<": "; _print(x); cerr<<endl;
#else
#define debug(x)	// nothing
#endif

template <class T>
void _print(T a) {cerr << a;}
template <class T>
void _print(vector<T> &arr) {cerr << "[ ";	for (auto i : arr)	cerr << i << " "; cerr << "]";}
template<class T>
void _print(set<T> &arr) {cerr << "[ "; for (auto i : arr) cerr << i << " "; cerr << "]";}
template <class X, class Y>
void _print(pair<X, Y> &p) {cerr << "[" << p.ff << "," << p.ss << "]";}
template<class X, class Y>
void _print(map<X, Y> &m) {cerr << "[ " << endl; for (auto i : m)cerr << i.ff << " " << i.ss << endl; cerr << "]";}
//__________________________________________________________________________________


void solve() {


}

signed main() {

#ifdef dharsanS2004
	freopen("error.txt", "w", stderr);
#endif
	fio;

	solve();

}