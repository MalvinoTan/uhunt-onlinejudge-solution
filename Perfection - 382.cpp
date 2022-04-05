#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
typedef pair <int,int> pii;
typedef pair <int,pii> piii;
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

int cntNum(int x) {
    int res = 0;
    while (x != 0) {
        x /= 10;
        res++;
    }   
    return res;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cout << "PERFECTION OUTPUT\n";
    while (cin >> n, n != 0) {
        int i = 1, sum = 0;
        while (i  <= n/2) {
            if (n % i == 0) sum += i;
            i++; 
        }

        for (i = 0; i < 5 - cntNum(n); i++) {
            cout << " ";
        }

        cout << n;

        if (sum == n) cout << "  PERFECT\n";
        else if (sum < n) cout << "  DEFICIENT\n";
        else cout << "  ABUNDANT\n";
    }

    cout << "END OF OUTPUT\n";

    return 0;
}