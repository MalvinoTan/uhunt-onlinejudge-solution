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

    int t,cnt = 0;
    while (cin >> t, t != 0){
        int a,b = 0, c = 0;
        cnt++;
        for(int i = 0; i < t; i++){
            cin >> a;
            if (a == 0) c++;
            else b++;
        } cout << "Case " << cnt << ": " << b-c << endl;
    }

    return 0;
}
