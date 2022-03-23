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

    int n, k;
    while (cin >> n >> k) {
        int ans = n;
        while (n / k != 0) {
            ans += n / k;
            n = n % k + n / k;
        }
        cout << ans << '\n';
    }

    return 0;
}
