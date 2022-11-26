#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,q,x,y;
    char cmd;
    cin >> t;
    while(t--) {
        cin >> q;
        unordered_map<int,int> um;
        while(q--) {
            cin >> cmd;
            if (cmd=='a') {
                cin >> x >> y;
                um.insert(pair<int,int>(x,y));
            }
            if (cmd=='b') {
                cin >> x;
                if (um.count(x)!=0) cout << um.at(x) << " ";
                else cout << -1 << " ";
            }
            if (cmd=='c') {
                cout << um.size() << " ";
            }
            if (cmd=='d') {
                cin >> x;
                um.erase(x);
            }
        }
        cout << "\n";
    }
}

