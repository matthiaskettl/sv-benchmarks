extern void abort(void); 
void reach_error(){}
void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: {reach_error();abort();} } return; }




int main()
{
  float x = 1.0f;
  float x1 = x/1.6f;

  while(x1 != x)
  {
    x = x1;
    x1 = x/1.6f;
  }

  __VERIFIER_assert(x == 0);
  return 0;
}
