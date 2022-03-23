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

    vector <string> v1, v2, v3, v4;

    for (int i = 0; i <= 9999; i++) {
        for (int j = 0; j <= 9999; j++) {
            string s1 = "", s2 = "", s3 = "", s4 = "";
            if ((i + j) * (i + j) == i*10+j && (i <= 9 && j <= 9)) {
                s1 = (char)(j + '0') + s1;
                s1 = (char)(i + '0') + s1;
                v1.push_back(s1);
            }
            if ((i + j) * (i + j) == i*100+j && i <= 99 && j <= 99) {
                s2 = (char)(j % 10 + '0') + s2;
                s2 = (char)((j / 10) % 10 + '0') + s2;
                s2 = (char)(i % 10 + '0') + s2;
                s2 = (char)((i / 10) % 10 + '0') + s2;
                v2.push_back(s2);
            }
            if ((i + j) * (i + j) == i*1000+j && i <= 999 && j <= 999) {
                s3 = (char)(j % 10 + '0') + s3;
                s3 = (char)((j / 10) % 10 + '0') + s3;
                s3 = (char)((j / 10 / 10) % 10 + '0') + s3;
                s3 = (char)(i % 10 + '0') + s3;
                s3 = (char)((i / 10) % 10 + '0') + s3;
                s3 = (char)((i / 10 / 10) % 10 + '0') + s3;
                v3.push_back(s3);
            }
            if ((i + j) * (i + j) == i*10000+j && i <= 9999 && j <= 9999) {
                s4 = (char)(j % 10 + '0') + s4;
                s4 = (char)((j / 10) % 10 + '0') + s4;
                s4 = (char)((j / 10 / 10) % 10 + '0') + s4;
                s4 = (char)((j / 10 / 10 / 10) % 10 + '0') + s4;
                s4 = (char)(i % 10 + '0') + s4;
                s4 = (char)((i / 10) % 10 + '0') + s4;
                s4 = (char)((i / 10 / 10) % 10 + '0') + s4;
                s4 = (char)((i / 10 / 10 / 10) % 10 + '0') + s4;
                v4.push_back(s4);
            }
        }
    }


    int n;
    while (cin >> n) {
        if (n == 2) {
            for (int i = 0; i < v1.size(); i++) {
                cout << v1[i] << '\n';
            }
        }
        else if (n == 4) {
            for (int i = 0; i < v2.size(); i++) {
                cout << v2[i] << '\n';
            }
        }
        else if (n == 6) {
            for (int i = 0; i < v3.size(); i++) {
                cout << v3[i] << '\n';
            }
        }
        else if (n == 8) {
            for (int i = 0; i < v4.size(); i++) {
                cout << v4[i] << '\n';
            }
        }
    }
    return 0;
}
