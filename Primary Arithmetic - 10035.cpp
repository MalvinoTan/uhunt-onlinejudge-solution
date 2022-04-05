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
    while (cin >> a >> b, a != 0 || b != 0) {
        if (a < b) swap(a, b);
        ll carry = 0, ans = 0;
        while (a != 0) {
            ll aa = a % 10, bb = b % 10;
            if (carry == 1) ans++;
            if (aa + bb + carry >= 10) carry = 1;
            else carry = 0;
            a /= 10;
            b /= 10;
        }

        if (carry == 1) ans++;

        if (ans == 0) cout << "No carry operation.\n";
        else if (ans == 1) cout << "1 carry operation.\n";
        else cout << ans << " carry operations.\n";
    }

    return 0;
}