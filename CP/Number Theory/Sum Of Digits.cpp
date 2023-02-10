int SumOfDigits(int x){
	return x ? SumOfDigits(x / 10) + (x % 10) : 0;
}
