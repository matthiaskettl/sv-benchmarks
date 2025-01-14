extern void abort(void); 
void reach_error(){}
/* The assertion does not hold. */

extern int __VERIFIER_nondet_int(void);
extern void abort(void); 
void assume_abort_if_not(int cond) { 
  if(!cond) {abort();}
}
void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: {reach_error();abort();} } return; }

int main()
{
  int x;
  float y, z;

  x = __VERIFIER_nondet_int();
  assume_abort_if_not(x >= -10 && x <= 10);

  y = x*x - 4.f;
  __VERIFIER_assert(y != 0.f);
  z = 1.f / y;
  return 0;
}
