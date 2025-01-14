extern void abort(void); 
void reach_error(){}
/* Example from "A Logical Product Approach to Zonotope Intersection", by
   Ghorbal, Goubault, Putot, published in CAV 10.
*/


extern double __VERIFIER_nondet_double();
extern void abort(void); 
void assume_abort_if_not(int cond) { 
  if(!cond) {abort();}
}
void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: {reach_error();abort();} } return; }

int main()
{
  double x,y;

  x = __VERIFIER_nondet_double();
  assume_abort_if_not(x >= 0. && x <= 10.);

  y = x*x - x;
  if (y >= 0) y = x / 10.;
  else y = x*x + 2.;

  __VERIFIER_assert(y >= 0. && y <= 105.);
  return 0;
}
