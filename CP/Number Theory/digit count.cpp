#include "bits/stdc++.h"
#define ll long long
using namespace std;

ll Digit_Count(ll n)
{
    if(n<0) n=-n;
    return n>0 ? int(log10(n)+1) : 1 ;
}

int main()
{
    cout << Digit_Count(0) << endl;                     ///1
    cout << Digit_Count(-0) << endl;                    ///1
    cout << Digit_Count(123456789) << endl;             ///9
    cout << Digit_Count(-123456789) << endl;            ///9
    cout << Digit_Count(123456789123456789) << endl;    ///18
    cout << Digit_Count(-123456789123456789) << endl;   ///18

    return 0;
}
