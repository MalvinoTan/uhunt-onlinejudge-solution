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

    int n, cnt = 0; cin >> n;
    string s;
    cin.ignore();
    for (int i = 0; i < n; i++){
        string tot = "";
        getline(cin,s);
        if (s.substr(0,6) == "donate"){
            for (int i = 7; i < s.size(); i++){
                tot += s[i];
            }
            stringstream ubah(tot);
            int x;
            ubah >> x;
            cnt += x;
        }
        else cout << cnt << endl;
    }

    return 0;
}
