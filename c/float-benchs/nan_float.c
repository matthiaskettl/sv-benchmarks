extern void abort(void); 
void reach_error(){}
/* Assertion can be violated because uninitialized floats can be NaN. 
 */

extern float __VERIFIER_nondet_float(void);
void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: {reach_error();abort();} } return; }

int main()
{
  float x;
  x = __VERIFIER_nondet_float();  

  __VERIFIER_assert(x==x);
  return 0;
}
