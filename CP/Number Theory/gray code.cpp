void GrayCode()
{
    int n; cin >> n;
    for(int i=0 ; i<(1<<n) ; i++){
        ll num = i^(i>>1);
        bitset<32>bits(num);
        string str=bits.to_string();
        for(int x=32-n ; x<32 ; x++) cout << str[x];
        cout << endl;
    }
}