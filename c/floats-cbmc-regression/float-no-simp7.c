extern void abort(void); 
void reach_error(){}

int main (int argc, char **argv) {
  float f =  0x1.9e0c22p-101f;
  float g = -0x1.3c9014p-50f;
  float target = -0x1p-149f;

  float result = f * g;

  if(!(result == target)) {reach_error();abort();}

  return 0;
}
