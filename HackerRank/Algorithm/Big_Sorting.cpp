/**
 *    Author:  Sohel Rana
 *    Date:    2020-10-23 21:44:02
 *    Link:    link
**/
#include <bits/stdc++.h>
#define endl        '\n'
#define db          double
#define ld          long double
#define ll          long long
#define ull         unsigned long long
#define sqr(x)      (x) * (x)
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   ((a/gcd(a,b)) * b)
#define pf(x)         push_front(x)
#define pb(x)       push_back(x)
#define eb(x)        emplace_back(x)
#define all(x)      (x).begin(), (x).end()
#define rall(x)     (x).rbegin(), (x).rend()
#define sz(x)         (int)x.size()
#define debug(x)     cerr << #x << " = " << (x) << endl
#define debug2(x,y) cerr << #x << " = " << (x)<< "," << #y << " = " <<(y)<< endl
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18; 

using namespace std;

bool myfunction(string i, string j) {
    int n = i.length();
    int m = j.length();
    if (n == m)
        return (i < j);

    return n < m;
}

int main() {
    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end(), myfunction);

    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;

    return 0;
}