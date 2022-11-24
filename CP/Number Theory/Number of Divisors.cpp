#include "bits/stdc++.h"
#define ll long long
using namespace std;


#define N (int)1e6+7
long long primes[N], cnt, isPrime[N];

int NOD(int n){
    ll divisor=1;
    for(int i=0 ; i<N and primes[i]*primes[i]<=n ; i++){
        if(n%primes[i] == 0){
            long long k = 1;
        
            while(n%primes[i] == 0){
                n/= primes[i];
                k++;
                if(n==0 or n==1) break;
            }
            divisor *= k;
        }
    }
    if(n>1) divisor *= 2;
    return divisor;
}


void sieve()
{
    for (long long i=3; i<N; i+=2)
        if(!isPrime[i])
            for (long long j=i*i; j<N; j+=i+i)
                isPrime[j]=1;

    primes[cnt++]=2;
    for (long long i=3; i<N; i+=2)
        if(!isPrime[i]) primes[cnt++]=i;
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
  
        sieve();
  
        ll n; cin >> n;
        cout << NOD(n) << endl;
    }

    return 0;
}
