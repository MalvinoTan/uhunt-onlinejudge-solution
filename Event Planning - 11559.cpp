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

    int n, b, h, w;
    while (cin >> n >> b >> h >> w) {
        int ans = 1e9;
        for (int i = 0; i < h; i++) {
            int cost; cin >> cost;
            for (int j = 0; j < w; j++) {
                int bed; cin >> bed;
                int temp = n * cost;
                if (n <= bed && temp <= b) {
                    ans = min(ans, temp);
                }
            }
        }
        if (ans != 1e9) cout << ans << '\n';
        else cout << "stay home\n";
    }

    return 0;
}