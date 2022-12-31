void AllPossiblePermutation()
{ 
    string s; cin >> s;
    sort(s.begin(),s.end());
    vector<string>v;
    do{
        v.pb(s);
    }while(next_permutation(s.begin(),s.end()));
    cout << v.size() << endl;
    for(auto x:v)
        cout << x << endl;
}
