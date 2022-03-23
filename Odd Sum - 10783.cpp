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
        int a, b; cin >> a >> b;
        if (b < a) swap(a, b);
        if (a % 2 == 0) a++;
        int ans = 0;
        for (int i = a; i <= b; i+=2) {
            ans += i;
        }
        cout << "Case " << cnt++ << ": " << ans << '\n';
    }

    return 0;
}
