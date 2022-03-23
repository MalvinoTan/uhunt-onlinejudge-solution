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

    int n,cnt = 0; cin >> n;
    while(n--){
        cnt++;
        int a,b,c; cin >> a >> b >> c;
        if(a > 20 || b > 20 || c > 20) cout << "Case " << cnt << ": " << "bad" << endl;
        else cout << "Case " << cnt << ": " << "good" << endl;
    }

    return 0;
}
