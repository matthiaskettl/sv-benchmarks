extern void abort(void); 
void reach_error(){}
/* Rump's function */

void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: {reach_error();abort();} } return; }

int main()
{
  float x,y,r;
  x = 77617.f;
  y = 33096.f;
  r = 333.75f * y*y*y*y*y*y + x*x * (11.0f * x*x*y*y - y*y*y*y*y*y - 121.0f * y*y*y*y - 2.0f) + 5.5f * y*y*y*y*y*y*y*y + x / (2.f * y);

  __VERIFIER_assert((r >= 0));
  return 0;
}

