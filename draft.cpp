#include <bits/stdc++.h>
using namespace std;                                           

#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define foru(i, a, b) for(int i = (a); i <= (b); i++)
#define ford(i, a, b) for(int i = (a); i >= (b); i--)
#define endl "\n"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
#define bit(n, i) (((n) >> (i)) & 1)
#define bitcount(n) __builtin_popcountll(n)
#define com(a, b) a ## b
#define scv(a, b, c) #a#b#c
#define db(x) cerr << "[" << #x << ": " << (x) << "] " << endl;
#define run cerr << "DONE" << endl; 
template<class T> void printvec(vector<T>& x, int a, int b) {foru (i, a, b) cout << x[i] << " "; cout << endl;}
mt19937 mt_rng(chrono::steady_clock::now().time_since_epoch().count());

typedef long long ll;
typedef double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vii;
typedef vector<pll> v2l;
typedef pair<char, int> pci;
typedef vector<pci> vci;

const ld PI = acos((ld) - 1);
const ld EPSILON = 1e-7;
const int N = 1e6 + 1;
const int NN = 1e3 + 1; 
const ll MOD = 1e9 + 7;
const ll oo = LLONG_MAX;
const int BASE = 10000;
const int di[4] = {-1, 0, 1, 0};
const int dj[4] = {0, 1, 0, -1};
const char dr[4] = {'U', 'R', 'D', 'L'};     

void query() {
    int n;
    cin >> n;
    long long a, b, c;
    cin >> a >> b >> c;
    long long x, y;
    cin >> x >> y;
    vector<ll> s(n);
    s[0] = a;
    for (int i = 1; i < n; i++) {
        s[i] = (s[i - 1] * b + a) % c;
    }
    sort(all(s));
    ll v = 0;
    for (int i = 0; i < n; i++) {
        v = (v * x + s[i]) % y;
    }
    cout << v << endl;
}  

void solve() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "Case #" << i << ": ";
        query();
    }
}

int main() {
    #ifdef DEBUG
        com(fre, open) (scv(solve, ., inp), "r", stdin);
        com(fre, open) (scv(solve, ., out), "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr); 
    cout.tie(nullptr);
    cout << fixed << setprecision(4);
    solve();
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
} 