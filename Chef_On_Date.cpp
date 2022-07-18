#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
#define endl "\n"
#define ll long long
#define sd(val) scanf("%d", &val)
#define ss(val) scanf("%s", &val)
#define sf(val) scanf("%f", &val)
#define sl(val) scanf("%lld", &val)
#define print(val) cout<<val;
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FOR(i, j, k, in) for (int i = j; i < k; i += in)
#define RFOR(i, j, k, in) for (int i = j; i >= k; i -= in)
#define rep(j, k) for (int i = j; i < k; i++)
#define rrep(j, k) for (int i = j; i < k; i--)

int main()
{
    FIO;
    int t;
    sd(t);
    FOR(i, 0, t, 1) {
        int availableCash, bill;
        sd(availableCash);
        sd(bill);
        if(bill > availableCash) {
            print("NO\n");
        }
        else {
            print("YES\n");
        }
    }
    return 0;
}