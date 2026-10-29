#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 1e7+1e5;

signed main()
{
    int rnd;
    cin >> rnd;
    mt19937 rng(rnd);
    
    cout << uniform_int_distribution<int>(1, maxn)(rng) << " ";
    cout << uniform_int_distribution<int>(1, maxn)(rng);

    return 0;
}
