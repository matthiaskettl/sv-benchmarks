extern void abort(void); 
void reach_error(){}

extern unsigned int __VERIFIER_nondet_uint(void);
void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: {reach_error();abort();}
  }
  return;
}
int main()
{
  unsigned int x,y;

  x = 1U;
  y = 1U;

  while(1)
    {
      x = x +2U*__VERIFIER_nondet_uint();
      y = y +2U*__VERIFIER_nondet_uint();


      __VERIFIER_assert(x+y!=1U);
    }
    return 0;
}

