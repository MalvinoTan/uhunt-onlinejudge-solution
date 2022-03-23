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

    double h, u, d, f;
    while (cin >> h >> u >> d >> f, h != 0) {
        double init = 0;
        double broken = u * (f / 100.0);
        int day = 0;
        while (1) {
            day++;
            init += u;
            if (init > h) {
                cout << "success on day " << day << '\n';
                break;
            }
            init -= d;
            //cout << "day " << day << " " << init << " " << u << '\n';
            if (init < 0) {
                cout << "failure on day " << day << '\n';
                break;
            }
            u -= broken;
            u = max(u, 0.0);
        }
    }

    return 0;
}
