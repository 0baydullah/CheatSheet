void AllPossibleCombination()
{
    ll n; cin >> n;
    int a[n];
    for(ll i=0 ; i<1<<n ; i++){
        for(ll j=0 ; j<n ; j++){
            if(i&1<<j) cout <<a[j] << " ";
        }cout << endl;
    }
}