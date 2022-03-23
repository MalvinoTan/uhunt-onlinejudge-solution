#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
typedef pair <int,int> pii;
typedef pair <int,pii> piii;
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

int toInt(string str) {
    int res = 0;
    for (int i = 0; i < str.size(); i++) {
        int x = str.size() - i - 1;
        res += (str[i] - '0') * pow(10, x);
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    bool first = true;
    double vNow = 0, hh1 = 0, mm1 = 0, ss1 = 0, hh2 = 0, mm2 = 0, ss2 = 0, ans = 0;
    while (getline(cin, s)) {
        if (s.size() > 8) {
            if (first) {
                string temp = "";
                for (int i = 9; i < s.size(); i++) {
                    temp += s[i];
                }
                hh1 = (int)(s[0] - '0')*10.0 + (int)(s[1] - '0')*1.0;
                mm1 = (int)(s[3] - '0')*10.0 + (int)(s[4] - '0')*1.0;
                ss1 = (int)(s[6] - '0')*10.0 + (int)(s[7] - '0')*1.0;
                ss1 += (hh1 * 60.0 + mm1) * 60.0;
                first = false;
                vNow = toInt(temp) * 1000 / 3600.0;
            }
            else {
                string temp = "";
                for (int i = 9; i < s.size(); i++) {
                    temp += s[i];
                }
                hh2 = (int)(s[0] - '0')*10.0 + (int)(s[1] - '0')*1.0;
                mm2 = (int)(s[3] - '0')*10.0 + (int)(s[4] - '0')*1.0;
                ss2 = (int)(s[6] - '0')*10.0 + (int)(s[7] - '0')*1.0;
                ss2 += (hh2 * 60.0 + mm2) * 60.0;
                ans += (ss2 - ss1) * vNow;
                ss1 = ss2;
                vNow = toInt(temp) * 1000 / 3600.0;
            }
        }
        else {
            hh2 = (int)(s[0] - '0')*10.0 + (int)(s[1] - '0')*1.0;
            mm2 = (int)(s[3] - '0')*10.0 + (int)(s[4] - '0')*1.0;
            ss2 = (int)(s[6] - '0')*10.0 + (int)(s[7] - '0')*1.0;
            ss2 += (hh2 * 60.0 + mm2) * 60.0;
            ans += (ss2 - ss1) * vNow;
            cout << s << " " << fixed << setprecision(2) << (ans / 1000.0) << " km\n";
            ss1 = ss2;
        }
    }
    return 0;
}
