ll n;
cin >> n;
  if (n & (n - 1) == 0) {
    cout << "YES\n"; // the number is power of 2
  } 
  else {
    cout << "NO\n"; // the number is not power of 2
  }
