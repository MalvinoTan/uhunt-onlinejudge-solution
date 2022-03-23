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

    double bulan, uangMuka, pinjaman, n;
    while (cin >> bulan >> uangMuka >> pinjaman >> n, bulan >= 0) {
        double ans = 0;
        bool ok = false;
        double temp = uangMuka + pinjaman;
        double bayar = pinjaman / bulan;
        double bulanKe, potongan; cin >> bulanKe >> potongan;
        double potTemp = potongan;
        for (int i = 1; i < n; i++) {
            double bulanKe, potongan; cin >> bulanKe >> potongan;
            //cout << "ans = " << ans << " " << bulanKe << '\n';
            while (ans < bulanKe && !ok) {
                temp *= (1.0 - potTemp);
                //cout << " bulan = " << ans << " " << pinjaman - ans * bayar << " " << temp << " " << potTemp << '\n';
                if (pinjaman - ans * bayar < temp) {
                    //cout << "1 bulan = " << ans << " " << pinjaman - ans * bayar << " " << temp << " " << potTemp << '\n';
                    ok = true;
                    break;
                }
                ans++;
            }
            potTemp = potongan;
            if (i == n-1) {
                while (ans < bulan && !ok) {
                    temp *= (1.0 - potTemp);
                    //cout << " bulan = " << ans << " " << pinjaman - ans * bayar << " " << temp << " " << potTemp << '\n';
                    if (pinjaman - ans * bayar < temp) {
                        //cout << "1 bulan = " << ans << " " << pinjaman - ans * bayar << " " << temp << " " << potTemp << '\n';
                        ok = true;
                        break;
                    }
                    ans++;
                }
            }
        }
        if (ans == 1) cout << ans << " month" << '\n';
        else cout << ans << " months" << '\n';
    }

    return 0;
}
/*
30 500.0 15000.0 3
0 .10
1 .03
3 .002
-99 0 17000 1
*/