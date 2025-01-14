extern void abort(void); 
void reach_error(){}
void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: {reach_error();abort();} } return; }

// Replace 1.6f to 2.5f to verification successful
#define X 1.6f

int main()
{
  float x = 1.0f;
  float x1 = x/X;

  while(x1 != x)
  {
    x = x1;
    x1 = x/X;
  }

  __VERIFIER_assert(x == 0);
  return 0;
}

