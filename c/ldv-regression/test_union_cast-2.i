extern void abort(void); 
void reach_error(){}
void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: {reach_error();abort();}
  }
  return;
}

extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));

int CURRENTLY_UNKNOWN;
struct l_struct_2E_X {
  double field0;
};
int main(void) {
 struct l_struct_2E_X llvm_cbe_var;
 *((&llvm_cbe_var.field0)) = 0x1.4p+4;
 *(((unsigned int *)((&llvm_cbe_var.field0)))) = 10u;
 __VERIFIER_assert(*(((unsigned int *)((&llvm_cbe_var.field0)))) == 10u);
 return 0;
}
