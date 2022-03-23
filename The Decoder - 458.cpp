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

    string s;
    while (getline(cin, s)) {
        for (int i = 0; i < s.size(); i++) {
            cout << (char) (s[i] - 7);
        }
        cout << '\n';
    }

    return 0;
}
