#include <math.h>
#include <fenv.h>

extern void abort(void); 
void assume_abort_if_not(int cond) { 
  if(!cond) {abort();}
}
extern void abort(void); 
void reach_error(){}
void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: {reach_error();abort();} } return; }

double __VERIFIER_nondet_double();

int main(void)
{
  double d = __VERIFIER_nondet_double();
  assume_abort_if_not(!isinf(d));
  assume_abort_if_not(!isnan(d));

  int save_round = fegetround();
  fesetround(FE_TOWARDZERO);
  double result = rint(d);
  fesetround(save_round);

  __VERIFIER_assert(trunc(d) == result);

  double d1 = __VERIFIER_nondet_double();
  assume_abort_if_not(isinf(d1));
  __VERIFIER_assert(isinf(trunc(d1)));

  double d2 = __VERIFIER_nondet_double();
  assume_abort_if_not(isinf(d2));
  __VERIFIER_assert(isinf(trunc(d2)));

  return 0;
}

