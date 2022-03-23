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
    while (getline(cin, s)) {
        string temp = "";

        vector <int> vec, ans, vecOri, vecSort;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                vec.push_back(stoi(temp));
                temp = "";
            }
            else temp += s[i];
        }
        
        vec.push_back(stoi(temp));
        vecOri = vec;
        vecSort = vec;
        sort(vecSort.begin(), vecSort.end());
        int cek = vec.size();

        while (1) {
            bool ok = true;
            for (int i = 0; i < vec.size(); i++) {
                if (vec[i] != vecSort[i] && vec[i] != -1) ok = false;
            }

            if (ok) break;

            cek--;

            int mx = -1, idx = -1;
            for (int i = vec.size() - 1; i >= 0; i--) {
                if (vec[i] > mx) {
                    mx = vec[i];
                    idx = i;
                }
            }

            //cout << mx << " " << idx << '\n';

            if (idx == 0) {
                ans.push_back(vec.size() - cek);
                vector <int> newVec;
                for (int i = cek; i >= 1; i--) {
                    newVec.push_back(vec[i]);
                }

                for (int i = cek; i < vec.size(); i++) {
                    newVec.push_back(-1);
                }

                vec = newVec;
            }
            else {
                ans.push_back(vec.size() - idx);
                ans.push_back(vec.size() - cek);
                vector <int> newVec;
                for (int i = idx; i >= 0; i--) {
                    newVec.push_back(vec[i]);
                }

                for (int i = idx + 1; i < vec.size(); i++) {
                    newVec.push_back(vec[i]);
                }

                vec = newVec;

                newVec.clear();

                for (int i = cek; i >= 1; i--) {
                    newVec.push_back(vec[i]);
                }

                for (int i = cek; i < vec.size(); i++) {
                    newVec.push_back(-1);
                }

                vec = newVec;
            }
        }

        for (int i = 0; i < vecOri.size()-1; i++) {
            cout << vecOri[i] << ' ';
        }
        cout << vecOri[vecOri.size() - 1] << "\n";

        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << ' ';
        }
        cout << "0\n";
    }

    return 0;
}