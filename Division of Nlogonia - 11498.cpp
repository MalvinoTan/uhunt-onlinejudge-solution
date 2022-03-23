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

    int n = 1,x,y,a,b;
    while (1){
        cin >> n;
        if (n == 0) break;
        cin >> x >> y;
        for (int i = 0; i < n; i++){
            cin >> a >> b;
            if (a > x && b > y) cout << "NE" << endl;
            else if (a < x && b < y) cout << "SO" << endl;
            else if (a < x && b > y) cout << "NO" << endl;
            else if (a > x && b < y) cout << "SE" << endl;
            else cout << "divisa" << endl;
        }
    }

    return 0;
}
