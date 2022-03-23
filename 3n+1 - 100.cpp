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
    while (cin >> a >> b) {
        ll l = min(a,b);
        ll r = max(a,b);
        ll mx = 0;
        for (ll i = l; i <= r; i++) {
            ll tmp = i;
            ll x = 0;
            while (tmp != 1) {
                if (tmp&1) tmp = 3 * tmp + 1;
                else tmp /= 2;
                x++;
            }
            mx = max(mx, x);
        }
        cout << a << " " << b << " " << mx + 1 << '\n';
    }

    return 0;
}
