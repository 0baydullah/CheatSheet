TrailingZeros()
{
    int n,sum=0; cin >> n;
    while(n){
        sum+=n/5;
        n/=5;
    }
    cout << sum << endl;
}