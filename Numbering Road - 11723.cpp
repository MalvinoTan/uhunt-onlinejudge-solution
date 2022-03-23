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

    double n, r;
    int cnt = 1;
    while (cin >> n >> r, n != 0 || r != 0) {
        int mx = r * 26;
        cout << "Case " << cnt++ << ": ";
        if (n - r > mx) cout << "impossible\n";
        else {
            if (n <= r) cout << 0 << '\n';
            else cout << ceil((n - r) / r) << '\n';
        }
    }

    return 0;
}
