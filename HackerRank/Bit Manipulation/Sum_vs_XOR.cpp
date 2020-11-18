/**
 *	Author:  Sohel Rana
 *	Date:    2020-11-13 18:53:37
 *	Task:    Sum_vs_XOR 
**/
#include <bits/stdc++.h>
#define endl        '\n'
#define sqr(x)      (x) * (x)
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   ((a/gcd(a,b)) * b)
#define pf(x) 		push_front(x)
#define pb(x)       push_back(x)
#define eb(x)		emplace_back(x)
#define all(x)      (x).begin(), (x).end()
#define rall(x) 	(x).rbegin(), (x).rend()
#define sz(x) 		(int)x.size()
#define debug(x) 	cerr << #x << " = " << (x) << endl
#define debug2(x,y) cerr << #x << " = " << (x)<< "," << #y << " = " <<(y)<< endl
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

typedef double 			   db;
typedef long double 	   ld;
typedef long long 		   ll;
typedef unsigned long long ull;
const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const long long INF = 1e18;
const ld eps = 1.0E-14;

using namespace std;

ll solve(ll n) {
    ll zeros = 0;
    ll tmp = n;
    while (tmp) {
        if(tmp & 1){
         //   nothing
        }
        else zeros++;

        tmp >>= 1;
    }

    return 1 << zeros;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    ll n;
    cin >> n;
    cout << solve(n) << endl;
    return 0;
}
