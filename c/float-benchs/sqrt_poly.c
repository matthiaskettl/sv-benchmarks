extern void abort(void); 
void reach_error(){}
/* Example from "Robustness analysis of finite precision implementations"
   by Goubault and Putot, extended version of an article published
   at APLAS 13.

   Particular case of a polynomial approximation of square root.
 */

extern double __VERIFIER_nondet_double();
extern void abort(void); 
void assume_abort_if_not(int cond) { 
  if(!cond) {abort();}
}
void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: {reach_error();abort();} } return; }

double sqrt2 = 1.414213538169860839843750;

int main()
{
  double S, I;

  I = __VERIFIER_nondet_double();
  assume_abort_if_not(I >= 1. && I <= 3.);

  if (I >= 2.) S = sqrt2 * (1.+(I/2.- 1.)*(.5-0.125*(I/2.-1.)));
  else S = 1.+(I-1.) * (.5+(I-1.) * (-.125+(I-1.)*.0625));

  __VERIFIER_assert(S >= 1. && S <= 2.);
  return 0;
}

