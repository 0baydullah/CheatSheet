# Bitwise operation & Functions 

  - bool Check(int N,int pos){return (bool)(N & (1<<pos));}
  - int Set(int N,int pos){	return N=N | (1<<pos);}



 - #define getbit(n, i) (((n) & (1LL << (i))) != 0) 
 - #define setbit0(n, i) ((n) & (~(1LL << (i)))) 
 - #define setbit1(n, i) ((n) | (1LL << (i))) 
 - #define togglebit(n, i) ((n) ^ (1LL << (i))) 
 - #define lastone(n) ((n) & (-(n))) 
