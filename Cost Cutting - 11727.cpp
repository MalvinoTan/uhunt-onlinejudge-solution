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

    int n,a,b,c;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a >> b >> c;
        int d[3] = {a,b,c};
        sort(d,d+3);
        cout << "Case " << i+1 << ": " << d[1] << endl;
    }

    return 0;
}
