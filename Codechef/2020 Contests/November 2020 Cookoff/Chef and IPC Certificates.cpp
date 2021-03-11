#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define MOD 1000000007
#define inf 2000000000

#define ff first
#define ss second

#define ll  long long int
#define pii pair<ll, ll>
#define vi  vector<ll>

#define hmap  unordered_map
#define hset  unordered_set
#define maxpq priority_queue<ll>
#define minpq priority_queue<ll,vi,greater<ll>>

template<typename T, typename U>
inline bool operator&(const T &s, U x) {return (s.find(x) != s.end());}

void solve() {
    ll n, m, k;
    cin >> n >> m >> k;
    vector<vi> t(n, vi(k));
    vi q(n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < k; ++j) {
            cin >> t[i][j];
        }
        cin >> q[i];
    }

    ll ans = 0;

    for (int i = 0; i < n; ++i) {
        if (q[i] > 10)continue;
        ll sum = 0;
        for (int j = 0; j < k; ++j) {
            sum += t[i][j];
        }
        if (sum >= m)ans++;
    }




    cout << ans;
}

void precompute() {}

int main() {
    sync;
    precompute();
    int testCases = 1, t = 1;
    // cin >> testCases;
    while (testCases--) {
        // cout << "Case #" << t++ << ": ";
        solve();
        cout << '\n';
    }

    return 0;
}