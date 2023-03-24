# Bitwise operation & Functions 

  - bool Check(int N,int pos){return (bool)(N & (1<<pos));}
  - int Set(int N,int pos){	return N=N | (1<<pos);}



 - #define getbit(n, i) (((n) & (1LL << (i))) != 0) 
 - #define setbit0(n, i) ((n) & (~(1LL << (i)))) 
 - #define setbit1(n, i) ((n) | (1LL << (i))) 
 - #define togglebit(n, i) ((n) ^ (1LL << (i))) 
 - #define lastone(n) ((n) & (-(n))) 
 - #define _SetBit(A, k) (A[(k / 32)] |= (1 << (k % 32)))
 - #define _ClearBit(A, k) (A[(k / 32)] &= ~(1 << (k % 32)))
 - #define _CheckBit(A, k) (A[(k / 32)] & (1 << (k % 32)))
 - #define SetBit(x, k) (x |= (1 << k))
 - #define ClearBit(x, k) (x &= ~(1 << k))
 - #define CheckBit(x, k) (x & (1 << k))
