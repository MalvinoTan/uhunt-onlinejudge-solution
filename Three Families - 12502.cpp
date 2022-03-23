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
        double x, y, z; cin >> x >> y >> z;
        double temp = z / (x + y);
        if (x > y) {
            double bonus = x - y;
            cout << fixed << setprecision(0) << x * temp + bonus * temp << '\n';
        }
        else if (x < y) {
            double bonus = y - x;
            double ansY = y * temp + bonus * temp;
            cout << fixed << setprecision(0) << max(0.0, z - ansY) << '\n';
        }
        else {
            cout << fixed << setprecision(0) << temp * x << '\n';
        }
    }

    return 0;
}
