#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e8;

signed main()
{
    int a, b;
    cin >> a >> b;

    if(a + b > maxn) cout << maxn;
    else cout << a + b;
    return 0;
}
