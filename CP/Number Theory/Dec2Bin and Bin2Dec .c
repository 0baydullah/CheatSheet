string dec_to_bin(int n) {
    string ret = "";
    for (int i = 31; i >= 0; i--) {
        int k = 1 << i;
        ret += (n & k)? '1' : '0';
    }
    return ret;
}


int bin_to_dec(int n){
    int num = n;
    int dec_value = 0;
    int base = 1;
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
        dec_value += last_digit * base;
         base = base * 2;
    }
    return dec_value;
}

int bin_to_dec(string s) {
    int ret = 0;
    for (int i = 0; i < 32; i++) 
        ret = (2*ret) + s[i] - '0';
    return ret;
}

/// this builtin function can be usable for converting binary to decimal
    stoi("1000101010" , 0 , 2) ; // parm (binary string, 0 , 2);
