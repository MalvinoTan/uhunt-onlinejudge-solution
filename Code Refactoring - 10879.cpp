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

    int tc, cnt = 1; cin >> tc;
    while (tc--) {
        ll n, a, b, c, d; cin >> n;
        bool key = false;
        ll i = 2;
        while (i * i <= n) {
            if (!key && n % i == 0) {
                a = i;
                b = n / i;
                key = true;
            }
            else if (key && n % i == 0) {
                c = i;
                d = n / i;
                break;
            }
            i++;
        }
        cout << "Case #" << cnt++ << ": " << n << " = " << a << " * " << b << " = " << c << " * " << d << '\n';
    }

    return 0;
}
