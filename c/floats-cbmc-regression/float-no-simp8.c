extern void abort(void); 
void reach_error(){}
#include <math.h>

int main (int argc, char **argv) {
  float f = -0x1p-129f;
  float g =  0x1p-129f;
  float target = 0x0;

  float result = f + g;

  if(!(result == target && signbit(result) == signbit(target))) {reach_error();abort();}

  return 0;
}
