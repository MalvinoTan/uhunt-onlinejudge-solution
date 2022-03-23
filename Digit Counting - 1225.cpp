#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
typedef pair <int,int> pii;
typedef pair <int,pii> piii;
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

string toStr(int n) {
    string res = "";
    while (n != 0) {
        res = (char)(n % 10 + '0') + res;
        n /= 10;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc; cin >> tc;
    while (tc--) {
        int n; cin >> n;
        string temp = "";
        int a[10] = {};
        for (int i = 1; i <= n; i++) {
            temp += toStr(i);
        }
        for (int i = 0; i < temp.size(); i++) {
            a[temp[i] - '0']++;
        }
        for (int i = 0; i < 9; i++) {
            cout << a[i] << ' ';
        }
        cout << a[9] << '\n';
    }
    
    return 0;
}
