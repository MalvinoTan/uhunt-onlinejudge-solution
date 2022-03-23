#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
typedef pair <int,int> pii;
typedef pair <int,pii> piii;
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a, b;
    while (cin >> a >> b, a != 0 && b != 0) {
        ll mx = 0;
        ll ans = 0;
        ll l = min(a,b), r = max(a,b);
        for (ll i = l; i <= r; i++) {
            ll cnt = 0;
            ll tmp = i;
            while (1) {
                cnt++;
                if (tmp&1) {
                    tmp = tmp * 3 + 1;
                }
                else {
                    tmp /= 2;
                }
                if (tmp == 1) break;
            }
            if (mx < cnt) {
                ans = i;
                mx = cnt;
            }
        }
        cout << "Between " << l << " and " << r << ", " << ans << " generates the longest sequence of " << mx << " values.\n";
    }
    
    return 0;
}
