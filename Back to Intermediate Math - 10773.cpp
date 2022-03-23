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
        double d, v, u; cin >> d >> v >> u;
        if (v == 0 || u == 0 || v >= u) cout << "Case " << cnt++ << ": " << "can't determine\n";
        else {
            double shortest = d / sqrt(u * u - v * v);
            double fastest  = d / u;
            cout << "Case " << cnt++ << ": " << fixed << setprecision(3) << abs(shortest - fastest) << '\n';
        }
    }

    return 0;
}
