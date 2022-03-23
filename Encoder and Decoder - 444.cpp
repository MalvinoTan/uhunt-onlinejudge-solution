#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
typedef pair <int,int> pii;
typedef pair <int,pii> piii;
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

char toLetter(string s) {
    int res = 0;
    for (int i = 0; i < s.size(); i++) {
        res += (int)(s[i] - '0') * pow(10, s.size() - i - 1);
    }
    return (char)(res);
}

string toStr(int x) {
    string res = "";
    while (x != 0) {
        res += (char)((x % 10) + '0');
        x /= 10;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    char arr[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
    while (getline(cin, s)) {
        string ans = "";
        bool key = true;
        for (int i = 0; i < 10; i++) {
            if (s[0] == arr[i]) key = false;
        }

        if (key) {
            for (int i = 0; i < s.size(); i++) {
               ans = toStr((int)s[i]) + ans;
            }
        }
        else {
            reverse(s.begin(), s.end());
            for (int i = 0; i < s.size(); i++) {
                if (s[i] == '1') {
                    string temp = "";
                    temp += s[i];
                    temp += s[i+1];
                    temp += s[i+2];
                    ans += toLetter(temp);
                    i += 2;
                }
                else {
                    string temp = "";
                    temp += s[i];
                    temp += s[i+1];
                    ans += toLetter(temp);
                    i++;
                }
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
