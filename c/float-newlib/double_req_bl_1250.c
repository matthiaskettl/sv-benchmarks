extern void abort(void); 
void reach_error(){}
extern double __VERIFIER_nondet_double();

typedef int __int32_t;
typedef unsigned int __uint32_t;

typedef union {
  double value;
  struct {
    __uint32_t lsw;
    __uint32_t msw;
  } parts;
} ieee_double_shape_type;

// nan check for doubles
int isnan_double(double x) { return x != x; }

/*
 * __fpclassify Categorizes floating point value arg into the following
 * categories:
 * zero, subnormal, normal, infinite, NAN, or implementation-defined category.
 * Returns One of FP_INFINITE, FP_NAN, FP_NORMAL, FP_SUBNORMAL, FP_ZERO or
 * implementation-defined type, specifying the category of arg.
 */

int __fpclassify_double(double x) {
  __uint32_t msw, lsw;

  do {
    ieee_double_shape_type ew_u;
    ew_u.value = (x);
    (msw) = ew_u.parts.msw;
    (lsw) = ew_u.parts.lsw;
  } while (0);

  if ((msw == 0x00000000 && lsw == 0x00000000) ||
      (msw == 0x80000000 && lsw == 0x00000000))
    return 2;
  else if ((msw >= 0x00100000 && msw <= 0x7fefffff) ||
           (msw >= 0x80100000 && msw <= 0xffefffff))
    return 4;
  else if (( msw <= 0x000fffff) ||
           (msw >= 0x80000000 && msw <= 0x800fffff))

    return 3;
  else if ((msw == 0x7ff00000 && lsw == 0x00000000) ||
           (msw == 0xfff00000 && lsw == 0x00000000))
    return 1;
  else
    return 0;
}

double fmax_double(double x, double y) {

  if (__fpclassify_double(x) == 0)
    return y;
  if (__fpclassify_double(y) == 0)
    return x;

  return x > y ? x : y;
}

int main() {
  // REQ-BL-1250: The fmax and fmaxf procedures shall return NaN, if the
  // arguments x and y are NaN.

  double x = 0.0 / 0.0; // NAN
  double y = 0.0 / 0.0; // NAN
  double res = fmax_double(x, y);

  if (!isnan_double(res)) {
    {reach_error();abort();}
    return 1;
  }
  return 0;
}
