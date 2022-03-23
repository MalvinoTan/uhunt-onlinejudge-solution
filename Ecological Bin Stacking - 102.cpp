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

    int b1, g1, c1, b2, g2, c2, b3, g3, c3;
    while (cin >> b1 >> g1 >> c1 >> b2 >> g2 >> c2 >> b3 >> g3 >> c3) {
        map<string, int> mp;

        mp["BCG"] = b2 + b3 + c1 + c3 + g1 + g2;
        mp["BGC"] = b2 + b3 + g1 + g3 + c1 + c2;
        mp["CBG"] = c2 + c3 + b1 + b3 + g1 + g2;
        mp["CGB"] = c2 + c3 + g1 + g3 + b1 + b2;
        mp["GBC"] = g2 + g3 + b1 + b3 + c1 + c2;
        mp["GCB"] = g2 + g3 + c1 + c3 + b1 + b2;

        int mn = 1e9;
        string s = "";
        for (auto i : mp) {
            if (i.second < mn) {
                s = i.first;
                mn = i.second;
            }
        }

        cout << s << " " << mn << '\n';
    }

    return 0;
}
