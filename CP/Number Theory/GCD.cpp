#include "bits/stdc++.h"

#define ll long long

using namespace std;

ll GCD(ll a,ll b){
    if(b==0) return a;
    return GCD(b,a%b);
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    cout << GCD(55,66) << endl;  /// 11

    return 0;
}
