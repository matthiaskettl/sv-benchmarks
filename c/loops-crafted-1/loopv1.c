int SIZE = 50000001;


int __VERIFIER_nondet_int();
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


int main() {
  int n,i,j;
  n = __VERIFIER_nondet_int();
  if (!(n <= SIZE)) return 0;
  i = 0; j=0;
  while(i<n){ 
 
    if(__VERIFIER_nondet_int())	  
      i = i + 6; 
    else
     i = i + 3;    
  }
  __VERIFIER_assert( (i%3) == 0 );
  return 0;
}
