
extern void abort(void); 
void reach_error(){}
extern void abort(void); 
void assume_abort_if_not(int cond) { 
  if(!cond) {abort();}
}
void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: {reach_error();abort();}
  }
  return;
}
int SIZE = 20000001;
unsigned int __VERIFIER_nondet_uint();
int main() {
  unsigned int n,i,k,j;
  n = __VERIFIER_nondet_uint();
  if (!(n <= SIZE)) return 0;
  i = j = k = 0;
  while( i < n ) {
    i = i + 3;
    if(i%2)
	    j = j+3;
    else
	    k = k+3;
    if(n>0)
	  __VERIFIER_assert( (i/2<=j) );
  }
  return 0;
}

