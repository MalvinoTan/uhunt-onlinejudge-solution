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

    unordered_map <string, unordered_map<string,string>> mp;
    mp["+x"]["+y"] = "+y";
    mp["+x"]["-y"] = "-y";
    mp["+x"]["+z"] = "+z";
    mp["+x"]["-z"] = "-z";
    mp["-x"]["+y"] = "-y";
    mp["-x"]["-y"] = "+y";
    mp["-x"]["+z"] = "-z";
    mp["-x"]["-z"] = "+z";
    mp["+y"]["+y"] = "-x";
    mp["+y"]["-y"] = "+x";
    mp["+y"]["+z"] = "+y";
    mp["+y"]["-z"] = "+y";
    mp["-y"]["+y"] = "+x";
    mp["-y"]["-y"] = "-x";
    mp["-y"]["+z"] = "-y";
    mp["-y"]["-z"] = "-y";
    mp["+z"]["+y"] = "+z";
    mp["+z"]["-y"] = "+z";
    mp["+z"]["+z"] = "-x";
    mp["+z"]["-z"] = "+x";
    mp["-z"]["+y"] = "-z";
    mp["-z"]["-y"] = "-z";
    mp["-z"]["+z"] = "+x";
    mp["-z"]["-z"] = "-x";

    int n;
    while(cin >> n, n != 0) {
        string now = "+x";
        for (int i = 1; i < n; i++) {
            string s; cin >> s;
            if (s == "No") continue;
            now = mp[now][s];
        }
        cout << now << '\n';
    }

    return 0;
}