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
  unsigned int x,y,z;

  x=0U;
  y=0U;
  z=0U;

  while(1)
    {
      x = x +1048576U*__VERIFIER_nondet_uint();
      y = y +2097152U*__VERIFIER_nondet_uint();
      z = z +4194304U*__VERIFIER_nondet_uint();

      __VERIFIER_assert(4U*x-2U*y+z!=1048576U);
    }
    return 0;
}

