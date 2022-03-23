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
    int cnt = 1;
    while (cin >> s, s != "*") {
        cout << "Case " << cnt++ << ": ";
        if (s == "Hajj") cout << "Hajj-e-Akbar\n";
        else cout << "Hajj-e-Asghar\n";
    }

    return 0;
}
