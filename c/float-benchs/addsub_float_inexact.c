extern void abort(void); 
void reach_error(){}
/* Rounding addition and subtraction in single-precision floats. */

void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: {reach_error();abort();} } return; }

int main()
{
  float x, y, z, r;

  x = 1e8f;
  y = x + 1.f;
  z = x - 1.f;
  r = y - z; 
  __VERIFIER_assert(r == 0.f);
  return 0;
}
