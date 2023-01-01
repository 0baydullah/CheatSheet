#include "bits/stdc++.h"
using namespace std;


#define SZ 1000007
int status[(SZ/32)+2];
vector<int>PRIME;

bool Check(int N,int pos){return (bool)(N & (1<<pos));}
int Set(int N,int pos){	return N=N | (1<<pos);}

void BitwiseSieve()
{
	 int i, j, sqrtSZ; 
     sqrtSZ = int( sqrt( SZ ) );
     for( i = 3; i <= sqrtSZ; i += 2 ) 
     {
		 if( Check(status[i>>5],i&31)==0)
		 {
	 		 for( j = i*i; j <= SZ; j += (i<<1) )
			 {
				 status[j>>5]=Set(status[j>>5],j & 31)   ;
	 		 }
		 }
	 }
	
	 PRIME.push_back(2);
	 for(i=3;i<=SZ;i+=2)
		 if( Check(status[i>>5],i&31)==0)
	 	 PRIME.push_back(i);
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    BitwiseSieve();
    for(auto x:PRIME)
        cout << x << " " ;

    return 0; 
}
