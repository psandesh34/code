#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
#define endl "\n"
#define ll long long
#define sd(val) scanf("%d", &val)
#define ss(val) scanf("%s", &val)
#define sf(val) scanf("%f", &val)
#define sl(val) scanf("%lld", &val)
#define print(val) cout << val << endl;
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define _for(i, j, k, in) for (int i = j; i < k; i += in)
#define _rfor(i, j, k, in) for (int i = j; i >= k; i -= in)
#define rep(j, k) for (int i = j; i < k; i++)
#define rrep(j, k) for (int i = j; i < k; i--)

int main() {
    FIO;
    int t;
    sd(t);
    while (t--) {
        int coins, people;
        sd(coins);
        sd(people);
        int finalCoins = 0;
        if (people > coins) {
            print(coins);
        } else {
            rep(1, people + 1) { finalCoins = max(finalCoins, coins % i); }
            print(finalCoins);
        }
    }
    return 0;
}