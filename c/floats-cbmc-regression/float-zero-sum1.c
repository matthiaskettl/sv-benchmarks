extern void abort(void); 
void reach_error(){}
#include <stdint.h>

union mix {
  float f;
  uint32_t i;
};

int f00 (float a, float b) {
  float sum = a + b;
  union mix m;
  m.f = sum;
  if(!(m.i != 0x80000000)) {reach_error();abort();}

  return 1;
}

int main (void) {
  // The sum should be a positive zero,
  // unless we round towards minus infinity.
  f00(-0x1.6b890ep+29, 0x1.6b890ep+29);
  return 0;
}
