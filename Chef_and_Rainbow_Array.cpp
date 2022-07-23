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
        int len;
        sd(len);
        int arrLen = len / 2;
        bool isEqual = true;
        int arr[arrLen], counter = 1;
        for (int i = 0; i < arrLen; i++) {
            sd(arr[i]);
            if (arr[i] != counter) counter++;
            if (arr[i] != counter) isEqual = false;
        }
        if (len % 2 == 1) {
            int temp;
            sd(temp);
            if (temp != counter) counter++;
            if (temp != counter) isEqual = false;
            if (temp != 7) isEqual = false;
        }
        for(int i = arrLen-1; i>=0; i--){
            int n;
            sd(n);
            if(arr[i] != n){
                isEqual = false;
            }
        }
        if (isEqual && counter == 7) {
            print("yes");
        } else {
            print("no");
        }
    }
    return 0;
}