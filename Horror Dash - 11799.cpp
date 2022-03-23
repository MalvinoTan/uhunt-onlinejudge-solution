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
        int n; cin >> n;
        int a[n] = {};
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        cout << "Case " << cnt++ << ": " << a[n-1] << '\n';
    }

    return 0;
}
