#include <math.h>

extern void abort(void); 
void reach_error(){}
void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: {reach_error();abort();} } return; }
 
int main(void)
{
    __VERIFIER_assert(!isless(2.0, 1.0));
    __VERIFIER_assert(isless(1.0, 2.0));
    __VERIFIER_assert(!isless(INFINITY, 1.0));
    __VERIFIER_assert(!isless(1.0, NAN));
 
    return 0;
}
