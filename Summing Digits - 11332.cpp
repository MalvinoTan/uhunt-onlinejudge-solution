#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
typedef pair <int,int> pii;
typedef pair <int,pii> piii;
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

ll sum(ll n) {
    if (n < 10) return n;
    ll res = 0;
    while (n != 0) {
        res += n % 10;
        n /= 10;
    }
    return sum(res);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    while (cin >> n, n != 0) {
        cout << sum(n) << '\n';
    }

    return 0;
}
