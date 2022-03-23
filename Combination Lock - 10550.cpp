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

    int a, b, c, d;
    while(cin >> a >> b >> c >> d, a != 0 || b != 0 || c != 0 || d != 0){
        int hasil = 1080;
        if (b > a) hasil += 360 - (b-a)*9;
        else if (b < a) hasil += (a-b)*9;
        if (c > b) hasil += (c-b)*9;
        else if (c < b) hasil += 360-(b-c)*9;
        if (d > c) hasil += 360-(d-c)*9;
        else if (d < c) hasil += (c-d)*9;
        cout << hasil << endl;
    }

    return 0;
}
