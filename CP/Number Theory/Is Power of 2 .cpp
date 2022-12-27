ll n;
cin >> n;
  if (n & (n - 1) == 0) {
    cout << "YES\n"; // the number is power of 2
  } 
  else {
    cout << "NO\n"; // the number is not power of 2
  }
**//note:
    if any number is 2's power then it don't have
      any odd divisor !!
/**
