extern void abort(void); 
void reach_error(){}
/* Rounding addition and subtraction in double-precision floats. */

void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: {reach_error();abort();} } return; }

int main()
{
  double x, y, z, r;

  x = 1e8;
  y = x + 1;
  z = x - 1;
  r = y - z;  
  __VERIFIER_assert(r == 2.);
  return 0;
}
