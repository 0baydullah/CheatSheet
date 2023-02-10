#include "bits/stdc++.h"
#define endl "\n"
using namespace std;

int n=1000000;

int divisors[1000001];

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    
    for(int i=1 ;i<=n ; i++)
        for(int j=i ; j<=n ; j+=i)
            divisors[j]++;
    
    for(int i=0 ; i<n ; i++) cout << divisors[i] << " ";
    cout << endl << divisors[9];
    

    return 0;
}
