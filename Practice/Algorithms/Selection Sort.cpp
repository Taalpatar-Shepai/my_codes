/**
 *	Author:  Sohel Rana
 *	Date:    2020-10-24 18:21:03
 *	Task:    Selection Sort 
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
#define pf(x) 		push_front(x)
#define pb(x)       push_back(x)
#define eb(x)		emplace_back(x)
#define all(x)      (x).begin(), (x).end()
#define rall(x) 	(x).rbegin(), (x).rend()
#define sz(x) 		(int)x.size()
#define debug(x) 	cerr << #x << " = " << (x) << endl
#define debug2(x,y) cerr << #x << " = " << (x)<< "," << #y << " = " <<(y)<< endl
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18; 

using namespace std;

void selection_sort(int arr[], int n) {
    int small, index_min, i, j;

    for (i = 0; i < n - 1; i++) {
        index_min = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[index_min]) {
                index_min = j;
            }
        }
        if(index_min != i)
            swap(arr[i], arr[index_min]);
        // for (int i = 0; i < 10; i++) cout << arr[i] << ' ';
        // cout << endl;
    }
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    int arr[10] = {3, 44, 38, 5, 15, 26, 27, 2, 46, 4};
    selection_sort(arr, 10);
    for (int i = 0; i < 10; i++) cout << arr[i]<<' ';
    return 0;
}
