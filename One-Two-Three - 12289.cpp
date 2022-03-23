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

    int n; cin >> n;
    while (n--) {
        string s,one = "one",two = "two"; cin >> s;
        int cnt1 = 0,cnt2 = 0;
        if (s.size() == 5) cout << 3 << endl;
        else {
            for (int i = 0; i < 3; i++) {
                if (s[i] == one[i]) cnt1++;
                if (s[i] == two[i]) cnt2++;
            }
            if (cnt1 >= 2) cout << 1 << endl;
            if (cnt2 >= 2) cout << 2 << endl;
        }
    }

    return 0;
}
