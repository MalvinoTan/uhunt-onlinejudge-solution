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

    int n, p, cntt = 1;
    while (cin >> n >> p, n != 0 || p != 0) {
        cin.ignore();
        unordered_map <string, bool> mp;
        string ans = "";
        int res = 0;
        double resPrice = 1e9;
        for (int i = 0; i < n; i++) {
            string req; getline(cin, req);
        }
        for (int i = 0; i < p; i++) {
            string proposal; getline(cin, proposal);
            double price; cin >> price;
            int x; cin >> x;
            cin.ignore();
            for (int j = 0; j < x; j++) {
                string proReq; getline(cin, proReq);
            }
            if (res < x) {
                res = x;
                ans = proposal;
                resPrice = price;
            }
            if (res == x && resPrice > price) {
                res = x;
                ans = proposal;
                resPrice = price;
            }
            
        }
        if (cntt == 1) cout << "RFP #" << cntt++ << '\n' << ans << '\n';
        else cout << "\nRFP #" << cntt++ << '\n' << ans << '\n'; 
        
    }

    return 0;
}