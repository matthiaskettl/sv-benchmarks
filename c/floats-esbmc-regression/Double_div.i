extern void abort(void); 
void reach_error(){}
void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: {reach_error();abort();} } return; }




int main()
{
  double x = 1.0;
  double x1 = x/2.5;

  while(x1 != x)
  {
    x = x1;
    x1 = x/2.5;
  }

  __VERIFIER_assert(x == 0);
  return 0;
}
