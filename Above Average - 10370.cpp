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

    int tc; cin >> tc;
    while (tc--) {
        int n; cin >> n;
        double a[n] = {};
        double sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        double avg = sum / n;
        double ans = 0;
        for (int i = 0; i < n; i++) {
            if (avg < a[i]) ans++;
        }
        cout << fixed << setprecision(3) << ans / n * 100.0 << "%\n";
    }

    return 0;
}
